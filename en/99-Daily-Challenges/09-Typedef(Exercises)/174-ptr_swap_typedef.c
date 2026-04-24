/* Objective: Use pointer typedef as a function argument.
1. Create a typedef 'float* FloatPtr;'.
2. Create a function called 'reset(FloatPtr p)' that sets the value 0.0 inside the address the pointer points to.
3. In main, declare a 'float balance = 1500.75;'.
4. Call the 'reset(&balance);' function.
5. Print the balance to confirm that the function was able to change it through the pointer alias.
*/

#include <stdio.h>

typedef float *FloatPtr;

void reset(FloatPtr p) {
    *p = 0.0;
}

int main() {
    float balance = 1500.75;

    printf("Your current balance is: $%.2f\n", balance);

    reset(&balance);

    printf("Your balance after paying the bills: $%.2f\n", balance);

    return 0;
}