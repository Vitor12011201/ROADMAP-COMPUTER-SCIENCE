/* To declare a pointer, we use the asterisk *.
The rule is: the pointer type must be the same as the type of the variable it will point to.
*/

#include <stdio.h>

int main(void) {
    int integer_number = 100;
    float bank_balance = 50.50;

    // DECLARATION:
    // "p_int" is a pointer to an integer (int-pointer)
    int *p_int;

    // "p_float" is a pointer to a decimal number (float-pointer)
    float *p_float;

    // ASSIGNMENT:
    // The pointer receives the address of the variable of the same type.
    // This is perfect! int* receives &int.
    p_int = &integer_number;

    // And float* receives &float.
    p_float = &bank_balance;

    printf("Address of the integer: %p\n", (void *)p_int);
    printf("Address of the balance: %p\n", (void *)p_float);

    return 0;
}