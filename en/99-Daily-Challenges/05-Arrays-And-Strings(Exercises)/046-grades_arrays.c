// Create an array that stores your semester grades,
// then print them on the screen.

#include <stdio.h>

int main() {
    float average = 0; // Initialized to avoid garbage values
    float grades[4] = {4.5, 7.8, 5.7, 9.4};

    //

    for (int i = 0; i < 4; i++) {
        // "Bimestre" is translated as "Term" or "Quarter" in academic contexts
        printf("Your grade for Term %d is: %.2f\n", i + 1, grades[i]);
        average += grades[i];
    }

    printf("Your final average is: %.2f\n", average / 4);

    return 0;
}