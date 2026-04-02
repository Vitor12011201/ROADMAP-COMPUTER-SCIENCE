#include <stdio.h>

int main(void) {
    int traffic_light = 2; // 1: Green, 2: Yellow, 3: Red

    // The switch evaluates the integer value of 'traffic_light'
    switch (traffic_light) {
    case 1:
        printf("Green Light: You can go.\n");
        break; // Exits the switch here if the value is 1

    case 2:
        // The program "jumps" directly here if traffic_light is 2
        printf("Yellow Light: Attention, slow down.\n");
        break; // Prevents the code from executing the next case below

    case 3:
        printf("Red Light: Stop the vehicle!\n");
        break;

    default:
        // Executed only if 'traffic_light' is not 1, 2, or 3
        printf("Error: Invalid light color.\n");
        break;
    }
}