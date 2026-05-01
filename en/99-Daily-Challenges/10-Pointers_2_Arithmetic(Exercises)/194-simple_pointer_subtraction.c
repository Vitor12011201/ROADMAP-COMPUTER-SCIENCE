/* OBJECTIVE: Practice retroactive access using *(p - n).
1. Create an int array: int years[3] = {2024, 2025, 2026};.
2. Create a pointer: int *p = &years[2]; (pointing to the last element).
3. Print the current value (*p).
4. Without moving the pointer 'p', use printf to print the first year (2024) using the syntax *(p - 2).
*/

#include <stdio.h>

int main()
{
    int years[3] = {2024, 2025, 2026};

    int *p = &years[2];

    printf("Value at p: %d\n", *p);

    printf("Value of the first element in the Array: %d\n", *(p - 2));

    return 0;
}