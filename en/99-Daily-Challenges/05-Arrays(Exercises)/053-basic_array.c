#include <stdio.h>

/* Create a program that:
Declares an integer array (int) with a size of 5.
Manually assigns the values 10, 20, 30, 40, and 50 to positions 0 through 4.
Prints only the first, the third (index 2), and the last value of the array. */

int main() {

    int array[5] = {10, 20, 30, 40, 50};

    printf("The first number in the Array is [%d], The third number in the Array is [%d], The fifth number in the Array is [%d]\n", array[0], array[2], array[4]);

    return 0;
}