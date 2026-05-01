/* OBJECTIVE: Calculate the distance between two specific points in a string.
1. Create a string: char path[] = "/usr/local/bin";.
2. Create a pointer 'p_start' pointing to the first '/'.
3. Create a pointer 'p_end' pointing to the last 'n'.
4. Subtract: long distance = p_end - p_start;.
5. Print the distance and check if it matches the manual character count.
- Reflection: What happens if you subtract p_start - p_end? Can the result be negative?
*/

#include <stdio.h>

int main()
{
    char path[] = "/usr/local/bin";

    char *p_start = &path[0];
    char *p_end = &path[13];

    long distance = p_end - p_start;
    long reflection = p_start - p_end;

    printf("Distance between the first element and the last element of the array: %ld\n", distance);

    printf("Reflection (Reverse Subtraction): %ld\n", reflection);

    return 0;
}