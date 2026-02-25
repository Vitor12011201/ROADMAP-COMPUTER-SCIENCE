/* Create an int variable health = 100;.
Create an int pointer *ptr and point it to health.
Change the health value to 80 using only the pointer (the * operator).
Print the value of the health variable at the end. */

#include <stdio.h>

int main() {

    int health = 100;
    int *ptr = &health; // Note: fixed 'prt' to 'ptr' to match common naming

    printf("The character's health is: %d\n", health);

    *ptr = 80;

    printf("The character's health is now: %d\n", health);

    return 0;
}