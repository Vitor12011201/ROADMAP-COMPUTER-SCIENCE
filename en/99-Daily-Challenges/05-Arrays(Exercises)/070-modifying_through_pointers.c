/* Goal: Prove that if you have the pointer, you control the array.
Create an int array data[3] = {1, 2, 3};.
Create an int pointer int *handler = data;.
Without using the name "data", change the first value to 99 using the pointer.
"Move" the pointer to the second position (handler++) and change the value to 88.
At the end, use a normal for loop in main to print the "data" array and see if the values actually changed. */

#include <stdio.h>

int main() {

    int data[3] = {1, 2, 3};

    printf("The Array before manipulation: \n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", data[i]);
    }

    int *handler = data;

    *handler = 99;

    handler++;
    *handler = 88;

    printf("================================\n");
    printf("The Array after manipulation is: \n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", data[i]);
    }

    return 0;
}