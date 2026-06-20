/* Objective: Practice displaying the same number in different bases using printf's features.
Instructions:
1. Declare a variable with the hexadecimal number: int value = 0x1A2B;.
2. Use printf to display this single number in 4 different ways on the same screen:
   - In decimal (%d)
   - In octal (%o)
   - In hexadecimal with lowercase letters (%x)
   - In hexadecimal with uppercase letters (%X)
3. Add the # character in the format (e.g., %#X and %#o) to make printf automatically include the 0X and 0 prefixes on screen. */

#include <stdio.h>

int main()
{

    int value = 0x1A2B;

    printf("value in decimal: %d\n", value);

    printf("value in octal: %#o\n", value);

    printf("hexadecimal with lowercase letters: %x\n", value);

    printf("hexadecimal with uppercase letters: %#X\n", value);

    return 0;

}