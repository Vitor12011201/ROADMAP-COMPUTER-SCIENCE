/* OBJECTIVE: Accumulate values while changing the pointer position.
1. Create a float array with 4 grades and end with a negative value (e.g., -1.0) as a sentinel.
2. Create a pointer 'ptr'.
3. Use a loop to sum all grades into a 'sum' variable.
Attention: Inside the loop, you must use sum += *ptr; and then ptr++;.
4. At the end, print the average of the grades.
*/

#include <stdio.h>

int main()
{
    int position = 0;
    float array[] = {3.4, 5.7, 8.3, 7.4, -1.0};
    float *ptr = &array[0];
    float sum = 0.0;

    while (*ptr != -1.0)
    {
        printf("Grade [%d]: %.2f\n", position + 1, *ptr);
        position++;
        sum += *ptr;
        ptr++;
    }

    printf("The average of your grades is: %.2f\n", sum / position);

    return 0;
}