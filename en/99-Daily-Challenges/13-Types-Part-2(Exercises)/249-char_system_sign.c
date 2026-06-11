/* Objective: Implement the logical trick to find out whether your compiler treats plain char as signed or unsigned.
Instructions:
1. In main, create a conditional test (if) comparing CHAR_MAX == UCHAR_MAX.
2. If equal, print: "On this system, plain char is UNSIGNED."
3. If different, print: "On this system, plain char is SIGNED."
4. Also print the value of CHAR_MIN to seal the verdict (if it is 0, it is unsigned; if it is -128, it is signed). */

#include <stdio.h>
#include <limits.h>

int main()
{

    if (CHAR_MAX == UCHAR_MAX)
    {
        printf("On this system, plain char is UNSIGNED.");
    } else
    {
        printf("On this system, plain char is SIGNED.");
    }

    printf("\n");

    printf("Minimum value of char: %d\n", CHAR_MIN);

    return 0;

}