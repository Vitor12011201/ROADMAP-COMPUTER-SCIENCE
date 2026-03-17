#include <stdio.h>

/* Create a program that:
Declares an integer array with a size of 6.
Asks the user to type 6 numbers.
The challenge: Print the array in reverse order (from last to first). */

int main() {

    int array[6];
    for (int i = 0; i < 6; i++) {
        printf("Enter an integer: \n");
        scanf("%d", &array[i]);
    }

    printf("The reversed Array looks like this: \n");
    for (int j = 5; j >= 0; j--) {
        printf("%d\n", array[j]);
    }

    return 0;
}"