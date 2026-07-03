/* Objective: Use the numeric limits of characters to manually validate whether an input is actually a number.
Instructions:
1. Create a function called int is_digit(char c).
2. Inside it, check if the received character is between the characters '0' and '9' (remember that you can use relational operators like >= and <= directly with characters).
3. If it is within the correct range, return its numeric value (using subtraction). If it is not a digit (e.g., if it is the letter 'A'), return -1.
4. In main, test the function by passing valid and invalid characters. */

#include <stdio.h>

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        return -1;
    }
}

int main()
{
    char test1 = '5';
    char test2 = '0';
    char test3 = '9';
    char test4 = 'A';

    printf("Test with '%c': %d\n", test1, is_digit(test1));
    printf("Test with '%c': %d\n", test2, is_digit(test2));
    printf("Test with '%c': %d\n", test3, is_digit(test3));
    printf("Test with '%c': %d\n", test4, is_digit(test4));

    return 0;
}