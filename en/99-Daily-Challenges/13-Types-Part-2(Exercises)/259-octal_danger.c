/* Objective: See in practice how a leading zero drastically changes the value of a variable.
Instructions:
1. Declare int common = 50;
2. Declare int dangerous = 050;
3. Print both using the %d specifier (decimal)
Question: Write in the comment why dangerous did not print 50, but rather 40. */
/*
Answer: The value "050" is not interpreted as fifty in C.
When an integer is written with a leading zero, the compiler interprets it as being in octal base (base 8).
Thus:

050 (octal) = 5 × 8¹ + 0 × 8⁰
            = 40 + 0
            = 40 (decimal)

That is why the "dangerous" variable prints 40 instead of 50.
"common" is interpreted normally in decimal (base 10), keeping the value 50.
*/

#include <stdio.h>

int main()
{

    int common = 50;

    int dangerous = 050;

    printf("common: %d\n", common);

    printf("dangerous: %d\n", dangerous);

    return 0;

}