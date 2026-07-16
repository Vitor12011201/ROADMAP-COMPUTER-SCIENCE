/* Objective: Master the scary but efficient syntax of casting and dereferencing a void* in the same line (inline).
Instructions:
1. Create a function called int compare_floats(const void *a, const void *b).
2. Inside it, without creating any auxiliary variable, cast a and b to (const float*) and dereference them using *.
3. The logic should be:
   - If the value of a is greater than b, return 1.
   - If the value of a is less than b, return -1.
   - If they are equal, return 0.
4. In main, declare two floats, call your function passing their addresses, and print the result. */

#include <stdio.h>

int compare_floats(const void *a, const void *b)
{
    if (*(const float *)a > *(const float *)b)
    {
        return 1;
    }

    if (*(const float *)a < *(const float *)b)
    {
        return -1;
    }

    return 0;
}

int main(void)
{
    float first = 7.5f;
    float second = 4.2f;

    int result = compare_floats(&first, &second);

    printf("Result: %d\n", result);

    return 0;
}