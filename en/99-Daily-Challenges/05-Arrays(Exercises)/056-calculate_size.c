#include <stdio.h>

/* Create an int variable 'size' that calculates the length of the array using the formula:
sizeof(array) / sizeof(double).
Use this 'size' variable to print all the elements. */

int main() {

    double array[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};

    int size = sizeof(array) / sizeof(double);

    printf("The size of the array variable is [%d]\n", size);
    printf("====================================\n");
    printf("The numbers in the Array are: \n");

    for (int i = 0; i < size; i++) {
        printf("%.1f\n", array[i]);
    }

    return 0;
}