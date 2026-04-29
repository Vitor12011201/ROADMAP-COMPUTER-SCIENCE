/* Objective: Practice the *(p + n) syntax to access elements without using brackets.
1. Create an array: int values[4] = {10, 20, 30, 40};
2. Create a pointer: int *ptr = values;
3. Without using loops, use printf to print the second and fourth elements of the array using only pointer addition syntax (e.g., *(ptr + n)).
4. Also print the memory address of each of these two elements to see the byte jump.
*/

#include <stdio.h>

int main() {

    int values[4] = {10, 20, 30, 40};

    int *ptr = values;

    printf("The second element of the array is: %d\n", *(ptr + 1));
    printf("Address of second element: %p\n\n", (void*)(ptr + 1));

    printf("The fourth element of the array is: %d\n", *(ptr + 3));
    printf("Address of fourth element: %p\n", (void*)(ptr + 3));

    return 0;
}