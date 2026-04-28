/* Objective: Traverse an entire array without using brackets [], using only arithmetic.
1. Create a 'double grades[3] = {8.5, 7.0, 9.2};' array.
2. Create a 'double *ptr = grades;' pointer. (Remember: the array name is already the address of the first element).
3. Use a for loop that runs 3 times.
4. Inside the loop, print the value pointed to by 'ptr' and then increment the pointer (ptr++).
Tip: Try printing the value using *(ptr + i) inside the loop to see another way of writing it!
*/

#include <stdio.h>

int main() {

    double grades[3] = {8.5, 7.0, 9.2};

    double *ptr = grades;

    for (int i = 0; i < 3; i++) {

        printf("Address: %p | Value: %.1f\n", (void*)ptr, *ptr);

        ptr++;
    }

    return 0;
}