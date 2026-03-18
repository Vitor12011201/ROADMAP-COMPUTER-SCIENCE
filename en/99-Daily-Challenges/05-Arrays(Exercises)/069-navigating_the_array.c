/* Goal: See how a pointer "walks" through the array's memory.
Declare int nums[4] = {10, 20, 30, 40};.
Create a pointer int *p = nums;.
Print the value of *p.
Now, use the command p++; (this moves the pointer to the next integer in memory).
Print *p again. What happened?
Repeat p++; and print it again. */

#include <stdio.h>

int main() {

    int numbers[4] = {10, 20, 30, 40};
    int *ptr = numbers;

    printf("The value at position [0]: %d\n", *ptr);

    ptr++;
    printf("The value at position [1]: %d\n", *ptr);

    ptr++;
    printf("The value at position [2]: %d\n", *ptr);

    return 0;
}