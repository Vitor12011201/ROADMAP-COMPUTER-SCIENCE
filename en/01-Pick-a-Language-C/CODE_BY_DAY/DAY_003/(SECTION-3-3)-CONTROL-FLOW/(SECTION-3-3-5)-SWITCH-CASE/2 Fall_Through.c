#include <stdio.h>

// If you omit the break, C "falls through" to the next case.
// See how to use this to create combos where a larger item includes the smaller ones:

int main(void) {
    int chosen_combo = 1; // 1: Family Combo, 2: Double Combo, 3: Individual

    printf("Your order includes:\n");

    switch (chosen_combo) {
    case 1:
        printf("- Giant Fries\n");
        // No break! The code continues to the next case...
        // Fall through!
    case 2:
        printf("- 2L Soda\n");
        // Fall through!
    case 3:
        printf("- Classic Burger\n");
        break; // The Individual ends here. The others brought everything above.

    default:
        printf("- Non-existent combo option.\n");
        break;
    }
}