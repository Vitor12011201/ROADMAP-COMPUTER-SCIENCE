/* Objective: Use explicit cast to take responsibility when reducing the size of data, observing what happens when the value does not fit in the destination type.
Instructions:
1. Declare a 32-bit integer with a high value: int large_value = 300;.
2. Create a variable of type char (which usually only holds up to 127, or 255 if unsigned): char short_value;.
3. If you do short_value = large_value; directly, the compiler will give you a data loss warning. Silence the warning using explicit cast: short_value = (char)large_value;.
4. Print short_value using %d. */

#include <stdio.h>

int main(void)
{
    int large_value = 300;
    char short_value;

    short_value = (char)large_value;

    printf("%d\n", short_value);

    return 0;
}