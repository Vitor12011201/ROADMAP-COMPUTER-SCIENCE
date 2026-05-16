/* Objective: Implement a simplified version of the logic from the text, expanding memory character by character (with initial size of 1).
1. Create a pointer char *text = malloc(1); (just for the initial \0).
2. Create a loop where you read a character from the keyboard using scanf(" %c", &letter) or getchar().
3. The loop should stop when the user types the period character '.'.
4. For each letter typed, increase the size of your text by +1 using realloc(), add the letter and move the \0.
5. At the end of the loop, print the complete entered string and free the memory.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text = malloc(1); // space only for '\0'

    if (text == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        return 1;
    }

    text[0] = '\0';

    int length = 0;
    char letter;

    printf("Enter a text ('.' to finish):\n");

    while (1)
    {
        letter = getchar();

        if (letter == '.')
        {
            break;
        }

        if (letter == '\n')
        {
            continue;
        }

        char *new_text = realloc(text, length + 2);

        if (new_text == NULL)
        {
            fprintf(stderr, "Error reallocating memory\n");
            free(text);
            return 1;
        }

        text = new_text;

        text[length] = letter;

        text[length + 1] = '\0';

        length++;
    }

    printf("\nText entered:\n%s\n", text);

    free(text);
    text = NULL;

    return 0;
}