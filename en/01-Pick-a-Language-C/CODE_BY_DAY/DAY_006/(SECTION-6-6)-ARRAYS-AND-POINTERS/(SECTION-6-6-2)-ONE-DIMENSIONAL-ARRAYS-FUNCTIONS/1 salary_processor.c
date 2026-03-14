#include <stdio.h>

/**
 * Professional Style (*a)
 * Uses 'float *' to show it accepts any block of floats.
 */
void apply_adjustment(float *salaries, int qty, float multiplier) {
    for (int i = 0; i < qty; i++) {
        salaries[i] *= multiplier; // Note that we use brackets even on the pointer!
    }
}

int main() {
    float list[] = {1500.0, 2800.0, 4200.0};
    apply_adjustment(list, 3, 1.10); // 10% Increase

    printf("Adjusted salary: %.2f\n", list[0]);
    return 0;
}