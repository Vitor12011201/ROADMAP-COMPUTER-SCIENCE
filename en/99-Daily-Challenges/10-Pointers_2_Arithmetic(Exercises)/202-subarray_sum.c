/* OBJECTIVE: Use pointer arithmetic to make a function process only a portion of the array.
1. Create a function 'int sum_elements(int *p, int qty)' that sums the elements using a loop.
2. In main, create an array 'int data[] = {1, 2, 3, 10, 20, 30};'.
3. Use pointer arithmetic to call the function and sum only the last 3 numbers (10, 20, 30).
*/

#include <stdio.h>

int sum_elements(int *p, int qty)
{
    int sum = 0;

    for (int i = 0; i < qty; i++)
    {
        sum += *(p + i);
    }

    return sum;
}

int main()
{
    int data[] = {1, 2, 3, 10, 20, 30};

    int result = sum_elements(data + 3, 3);

    printf("The sum of the last 3 elements of the array is: %d\n", result);

    return 0;
}