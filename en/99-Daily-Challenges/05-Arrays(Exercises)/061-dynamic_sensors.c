#include <stdio.h>

/* Create a program that:
Use #define to create a constant named MAX with the value 6.
Declare an integer array named alerts[MAX].
Initialize the array in a single line as follows:
Set the first element (index 0) to 10.
Use the expression [MAX - 3] to set the value 50.
Right after the 50 (in the same sequence, without using new brackets), place the value 100.
Use a for loop to print all the indices and values of the array. */

#define MAX 6

int main() {

    int alerts[MAX] = {10, [MAX - 3] = 50, 100};

    printf("The Array numbers are: \n");
    for (int i = 0; i < MAX; i++) {
        printf("Index [%d]: %d\n", i, alerts[i]);
    }

    return 0;
}