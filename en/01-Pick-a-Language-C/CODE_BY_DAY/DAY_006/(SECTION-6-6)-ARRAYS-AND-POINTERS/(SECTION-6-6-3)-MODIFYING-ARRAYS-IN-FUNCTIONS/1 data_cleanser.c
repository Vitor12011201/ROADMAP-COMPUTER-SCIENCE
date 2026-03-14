#include <stdio.h>

// The function accesses the original address and resets any negative value to zero.
void reset_negatives(int *data, int len) {
    for (int i = 0; i < len; i++) {
        if (data[i] < 0) {
            data[i] = 0; // Modifies the original value in memory
        }
    }
}

int main() {
    int sensors[] = {10, -5, 20, -1, 30};

    reset_negatives(sensors, 5);

    printf("Clean data: ");
    for (int i = 0; i < 5; i++) printf("%d ", sensors[i]);
    // Output: 10 0 20 0 30

    return 0;
}