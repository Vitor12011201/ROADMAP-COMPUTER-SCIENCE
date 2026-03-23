/* Goal: Prove that \0 occupies real space in memory.
1. Declare char s[] = "Hi";.
2. Print sizeof(s).
Question: If "Hi" has 2 letters, why does sizeof say it is 3 bytes?
Answer: The array contains the null terminator (\0), which tells the compiler where the string should stop. */

#include <stdio.h>

int main()
{
    char s[] = "Hi";

    printf("The s[] array measures [%zu] bytes because the null terminator is included, showing where the string must stop\n", sizeof(s));

    return 0;
}