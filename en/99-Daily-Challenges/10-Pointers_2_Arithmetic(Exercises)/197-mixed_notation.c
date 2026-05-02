/* OBJECTIVE: Practice the formula a[b] == *(a + b) in a cross-referenced way.
1. Create an array: int nums[] = {10, 20, 30, 40, 50};.
2. Create a pointer: int *p = nums;.
3. Print the value 40 (index 3) in three different ways in a single printf (or separate printfs):
- Using the array with arithmetic: *(nums + 3).
- Using the pointer with brackets: p[3].
- Using the pointer with arithmetic: *(p + 3).
*/

#include <stdio.h>

int main()
{
    int nums[] = {10, 20, 30, 40, 50};

    int *p = nums;

    // Printing the value 40 using three different notations
    printf("Using *(nums + 3): %d\n", *(nums + 3));

    printf("Using p[3]: %d\n", p[3]);

    printf("Using *(p + 3): %d\n", *(p + 3));

    return 0;
}