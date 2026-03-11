#include <stdio.h>

/**
 * Simulated Image Processing
 * Objective: Show how to apply a mathematical operation to all
 * elements of a matrix (Full Iteration).
 */

int main() {
    // An "image" where each number represents pixel intensity (0-255)
    int image[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int brightness = 50;

    printf("--- Original Image ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", image[i][j]);
            // Applying the "brightness filter"
            image[i][j] += brightness;
        }
        printf("\n");
    }

    printf("\n--- Image with Brightness (+50) ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}