/* Objective: Perform arithmetic with characters to create a basic encryption system.
Instructions:
1. Declare a char variable letter = 'A';.
2. Modify the variable by adding 3 directly to it (letter = letter + 3; or letter += 3;).
3. Print the variable using %c (to see the character) and %d (to see the number in the ASCII table).
Reflection: Congratulations, you've just created the Caesar cipher, one of the oldest encryption techniques in history! */

#include <stdio.h>

int main()
{

    char letter = 'A';

    letter = letter + 3;

    printf("%c\n", letter);

    printf("%d\n", letter);

    return 0;

}