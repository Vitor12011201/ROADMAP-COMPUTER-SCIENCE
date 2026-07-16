/* Objective: Silence the classic compiler warning when printing memory addresses.
Instructions:
1. Declare a double variable pi = 3.14159;.
2. Create a specific double pointer *ptr_pi = &pi;.
3. Try to print it using printf("%p\n", ptr_pi); and enable all warning flags in your compiler (-Wall -Wextra).
4. Fix the warning by applying explicit cast to the required generic pointer: (void *)ptr_pi. */

#include <stdio.h>

int main(void)
{
    double pi = 3.14159;
    double *ptr_pi = &pi;

    printf("%p\n", (void *)ptr_pi);

    return 0;
}