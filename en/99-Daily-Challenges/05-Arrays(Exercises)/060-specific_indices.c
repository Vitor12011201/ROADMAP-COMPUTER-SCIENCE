#include <stdio.h>

/* Create a program that:
Declares an int array 'sequence[8]'.
In the initialization, set index 0 to 100.
Set index 4 to 500 and, on the same line, place the values 600 and 700 immediately after (without using new brackets for them).
Use a loop to print the entire array and observe what happened at indices 5 and 6. */

int main() {

    int sequence[8] = {100, [4] = 500, 600, 700};

    printf("The numbers in the Array are: \n");
    for (int i = 0; i < 8; i++) {
        printf("%d\n", sequence[i]);
    }

    return 0;
}