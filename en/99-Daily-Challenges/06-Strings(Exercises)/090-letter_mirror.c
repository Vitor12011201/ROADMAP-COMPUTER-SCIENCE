/* Goal: Manipulate addresses and values at the same time.
1. Declare char text[] = "ABCDE";
2. Create a pointer that points to this array: char *p = text;
3. Using only the pointer p, change the letter 'C' to 'X'.
4. Now, use the pointer to skip the first letter (p++) and print the string from there. */

#include <stdio.h>

int main()
{
    char text[] = "ABCDE";
    char *p = text;

    printf("The original text is: [%s]\n", p);


    p[2] = 'X';


    p++;

    printf("The modified text starting from p++ is: [%s]\n", p);

    return 0;
}