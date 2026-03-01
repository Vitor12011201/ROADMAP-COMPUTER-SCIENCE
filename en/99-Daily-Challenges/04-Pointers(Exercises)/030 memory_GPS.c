/* Create a program with two variables: int a and int b.
Ask the user to enter values for a and b.
Create an int pointer *p.
Point p to 'a' and print the value.
Then, change the same pointer p to point to 'b' and print the value.
(The goal is to see that a pointer can change its "target" during the program). */

#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Enter a number: \n");
    scanf("%d", &a);

    printf("Enter another number: \n");
    scanf("%d", &b);

    // Pointing to 'a'
    int *p = &a;
    printf("The pointer is pointing to 'a', value: %d\n", *p);

    // Changing the target to 'b'
    p = &b;
    printf("The pointer is now pointing to 'b', value: %d\n", *p);

    return 0;
}