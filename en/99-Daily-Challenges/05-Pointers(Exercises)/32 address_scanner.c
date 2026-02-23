/* Create a program that asks the user to type an integer.
Store this number in a variable x.
Then, print the following phrase:
"The value %d is stored in 'room' number %p". */

#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: \n");
    scanf("%d", &number);

    printf("The value %d is stored at address number %p\n", number, (void *)&number);

    return 0;
}