/* Objective: Use typedef to handle raw hardware data that may change in size (e.g., from 8-bit to 16-bit).
1. Create a typedef named 'Reading' for the 'unsigned char' type (representing a sensor from 0 to 255).
2. Create a 'Sensor' struct with: int id and a 'Reading' array called 'history[5]'.
3. In main, create a sensor and fill the history with 5 values.
4. Maintenance Action: Now, imagine the sensor was replaced by a more powerful model that goes up to 65,535.
5. Change the 'Reading' typedef to 'unsigned short' and verify if your printing and average calculation code still makes sense.
*/

#include <stdio.h>

typedef unsigned short Reading;

typedef struct {
    int id;
    Reading history[5];
} Sensor;

int main() {

    Sensor s1 = {.id = 654321, .history = {43, 64, 3, 67, 6}};

    printf("Sensor ID: %d\n", s1.id);

    for (int i = 0; i < 5; i++) {

        printf("History [%d]: %u\n", i + 1, s1.history[i]);
    }

    return 0;
}