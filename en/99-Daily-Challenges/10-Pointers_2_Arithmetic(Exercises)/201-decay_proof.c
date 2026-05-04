/* OBJECTIVE: See with your own eyes that the array "shrinks" inside the function.
1. Create a function 'void analyze_size(int arr[])'. Inside it, print 'sizeof(arr)'.
2. In main, create 'int my_array[10];' and print 'sizeof(my_array)'.
3. Pass the array to the function.
Challenge: In your main, the size should be 40 (10 ints). In the function, it will be 8 (the pointer size). Explain in a comment why this happens.

Answer: Outside the function, 'sizeof(my_array)' returns the total size of the array (10 * sizeof(int) = 40 bytes).
Inside the function, the array is automatically converted to a pointer (int *arr),
so 'sizeof(arr)' returns only the pointer size (4 or 8 bytes), and not the total array size.
*/

#include <stdio.h>

void analyze_size(int arr[])
{
    printf("Pointer size: %zu Bytes\n", sizeof(arr));
}

int main()
{
    int my_array[10];

    printf("Array size: %zu Bytes\n", sizeof(my_array));

    analyze_size(my_array);

    return 0;
}