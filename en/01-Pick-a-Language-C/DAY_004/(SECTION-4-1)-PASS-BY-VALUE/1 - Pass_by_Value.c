#include <stdio.h>

// This function tries to increase the volume, but it only receives a COPY
void increase_volume(int vol) {
    vol = vol + 5; // Here, the local 'vol' becomes 15
    // The original volume in main() doesn't even know what happened here!
}

int main(void) {
    int current_volume = 10;

    // We call the function passing 'current_volume'
    // What happens here is: vol = current_volume (a copy of the value 10)
    increase_volume(current_volume);

    // What will be printed here? 10 or 15?
    printf("Volume in main: %d\n", current_volume); // Surprise: it prints 10!

    return 0;
}