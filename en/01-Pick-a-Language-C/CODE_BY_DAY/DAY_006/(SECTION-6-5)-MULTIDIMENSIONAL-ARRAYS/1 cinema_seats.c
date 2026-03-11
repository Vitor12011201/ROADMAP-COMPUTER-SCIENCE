#include <stdio.h>

/**
 * Cinema Booking System
 * Objective: Demonstrate the use of 2D arrays for occupancy control.
 * 0 = Available | 1 = Reserved
 */

int main() {
    // 4x4 matrix representing cinema rows and columns
    int cinema[4][4] = {0}; // Initializes all seats as available (0)

    // Making some manual reservations using [row][column] indices
    cinema[0][0] = 1;
    cinema[1][2] = 1;
    cinema[2][3] = 1;
    cinema[3][0] = 1;

    printf("--- SEATING CHART (1 = Occupied) ---\n");
    for (int i = 0; i < 4; i++) {
        printf("Row %d: ", i);
        for (int j = 0; j < 4; j++) {
            printf("[%d] ", cinema[i][j]);
        }
        printf("\n");
    }

    return 0;
}