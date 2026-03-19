/* Goal: Declare and print string literals.
1. In main, declare a string like this: char *phrase = "Learning the C language";.
2. Use printf with the %s format specifier to display the phrase.
3. Try to print only the first character of this string using %c and phrase[0]. */

#include <stdio.h>

int main() {

    char *phrase = "Learning the C language";

    printf("%s\n", phrase);

    printf("The first letter of the char Array is: [%c]\n", phrase[0]);

    return 0;
}