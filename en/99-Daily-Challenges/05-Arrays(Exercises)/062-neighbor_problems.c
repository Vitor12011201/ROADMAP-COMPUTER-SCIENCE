/* Goal: Observe "memory garbage" in practice.
Declare an int array a[3] = {11, 22, 33};.
Try to print index 3 and index 4.
Since the array only goes up to index 2, what will appear are values that were "leftover" in the RAM.
Note down which bizarre values appeared. */

#include <stdio.h>

int main() {

    int array[3] = {11, 22, 33};

    printf("%d\n", array[3]);
    printf("%d\n", array[4]);

    return 0;
}