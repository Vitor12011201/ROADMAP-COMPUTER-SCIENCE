/* Create a char variable letter = 'A';.
Create a char pointer *p that points to letter.
Use the pointer to change the letter to 'Z'.
Print both 'letter' and '*p'. */

#include <stdio.h>

int main() {

    char letter = 'A';
    char *p = &letter;

    printf("The content of the variable 'letter' is: %c\n", letter);

    *p = 'Z';

    printf("Now, the content of the variable 'letter' is: %c\n", letter);

    return 0;
}