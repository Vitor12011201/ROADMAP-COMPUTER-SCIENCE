/* Objective: Simulate access to structured data where you need to "jump" elements manually.
1. Create an int array with 10 numbers (1 to 10).
2. Create a pointer: int *ptr = &array[0];
3. Create a loop that prints only the numbers at even positions of the array (indices 0, 2, 4, 6, 8).
The Challenge: You must do this by incrementing the pointer by 2 at a time within the loop (using ptr += 2 or printing *(ptr + i) where i increases by 2).
4. Print the value and the hexadecimal address of each jump to confirm that it is skipping the equivalent of two integers (8 bytes if int is 4).
*/

#include <stdio.h>

int main() {

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = &array[0];

    for (int i = 0; i < 10; i += 2) {

        printf("Index %d has the array number: %d\n", i, *(ptr + i));
        printf("Hexadecimal address: %p\n\n", (void*)(ptr + i));
    }

    return 0;
}