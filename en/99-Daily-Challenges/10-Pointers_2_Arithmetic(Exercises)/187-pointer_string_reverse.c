/* Objective: Use pointer addition and subtraction to manipulate a string backwards.
1. Create a string: char name[] = "Vitor";
2. Create a pointer: char *p = name;
3. First, use a while loop and 'p++' to move the pointer to the final character (the '\0').
4. Now, use pointer arithmetic to move back ('p--') and print each letter from end to beginning until you reach the start of the name again.
*/

#include <stdio.h>

int main() {

    char name[] = "Vitor";

    char *p = name;

    while (*p != '\0') {
        p++;
    }

    p--;

    while (p >= name) {
        printf("%c\n", *p);
        p--;
    }

    return 0;
}