/* The scenario:
You have a bank account (a float variable). Two people (two pointers) have the address of this account.
If one person changes the value inside, the other will see the change, because the address is the same!

Instructions:
1. Declare a float variable: float balance = 500.00;
2. Declare two float pointers: float *p1; and float *p2;
3. Point both pointers to the balance variable.
4. Print the address of balance using &.
5. Print the address stored in p1 and p2 (they should all be the same!).
Extra Challenge: Use sizeof to print how much space the pointer p1 occupies in memory. */

#include <stdio.h>

int main() {
    float balance = 500.00;
    float *p_1;
    float *p_2;

    p_1 = &balance;
    p_2 = &balance;

    printf("The address of the balance variable is: %p\n", (void *)&balance);
    printf("The address stored in pointer p_1 is:  %p\n", (void *)p_1);
    printf("The address stored in pointer p_2 is:  %p\n", (void *)p_2);

    // Extra Challenge
    printf("The size of pointer p_1 in memory is:  %zu bytes\n", sizeof(p_1));

    return 0;
}