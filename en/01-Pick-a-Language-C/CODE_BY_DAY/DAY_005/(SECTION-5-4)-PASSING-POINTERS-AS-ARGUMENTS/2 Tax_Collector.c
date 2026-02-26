#include <stdio.h>

// FUNCTION 1: Tries to collect tax the normal way (PASS BY VALUE)
// It receives a COPY of the money.
void common_tax_collector(float cash) {
    cash = cash - 10.0;
    printf("--- Common Function: I took 10 from the copy, but the original doesn't even know! ---\n");
}

// FUNCTION 2: Collects real tax (PASS BY POINTER)
// It receives the ADDRESS of where the money is stored.
void real_tax_collector(float *ptr_cash) {
    // We dereference (*) to mess with the original money
    *ptr_cash = *ptr_cash - 10.0;
    printf("--- Real Function: I used the address to take 10 from the original! ---\n");
}

int main(void) {
    float my_balance = 100.0;

    printf("Initial balance: %.2f\n\n", my_balance);

    // Attempt 1: Passing the value (Nothing will change in main)
    common_tax_collector(my_balance);
    printf("Balance after common tax: %.2f (Same! C copied the value)\n\n", my_balance);

    // Attempt 2: Passing the address (The magic happens)
    real_tax_collector(&my_balance);
    printf("Balance after real tax:  %.2f (Changed! The function found the original)\n", my_balance);

    return 0;
}