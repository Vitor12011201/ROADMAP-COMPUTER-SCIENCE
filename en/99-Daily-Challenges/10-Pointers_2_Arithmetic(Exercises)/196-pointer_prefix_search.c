/* OBJECTIVE: Use pointer subtraction to identify the size of a word within a sentence.
1. Create a sentence: char sentence[] = "Studying Pointers";.
2. Create a pointer 'p_start = sentence;'.
3. Create a pointer 'p_current = sentence;'.
4. Use a while loop to move 'p_current' until it finds the first space ' '.
5. Once the space is found, calculate the size of the first word by subtracting p_current - p_start.
6. Print the word size and, using a loop from 0 to that distance, print the word character by character using p_start[i].
*/

#include <stdio.h>

int main()
{
    char sentence[] = "Studying Pointers";

    char *p_start = sentence;
    char *p_current = sentence;

    while (*p_current != ' ')
    {
        p_current++;
    }

    int size = p_current - p_start;

    printf("First word size: %d\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("[%c] ", p_start[i]);
    }

    printf("\n");

    return 0;
}