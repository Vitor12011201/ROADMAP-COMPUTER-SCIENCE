#include <stdio.h>

/* OBJECTIVE: Solve the classic integer division bug using explicit Typecasting.
   Ensure that the operation occurs in floating point BEFORE the result
   is truncated by the default integer behavior. */

int main() {
    int packets_sent = 5;
    int seconds = 2;

    // HIDDEN BUG: int divided by int always results in int! 5 / 2 becomes 2.
    float wrong_rate = packets_sent / seconds;

    // SOLUTION: We use the cast operator '(float)' on one of the terms.
    // This temporarily promotes the variable to float, forcing a real division (5.0 / 2).
    float correct_rate = (float)packets_sent / seconds;

    printf("--- Transmission Rate Simulator ---\n");
    printf("Wrong Mode (No Cast):  %.2f packets/sec\n", wrong_rate);
    printf("Correct Mode (With Cast): %.2f packets/sec\n", correct_rate);

    return 0;
}