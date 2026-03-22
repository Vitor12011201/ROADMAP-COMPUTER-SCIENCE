/* Goal: Recreate the strlen function from scratch to understand how it works internally.
1. Create your own function: int my_string_length(char *s).
2. Inside it, use a pointer or a counter to traverse the string until finding the \0.
3. In main, compare the result of your function with the official strlen() for the phrase "Software Engineering". */

#include <stdio.h>
#include <string.h>

int my_string_length(char *s)
{
    int counter = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        counter++;
    }
    return counter;
}

int main()
{
    char phrase[] = "Software Engineering";

    // Comparing the manual count vs the official library function
    printf("The amount of space the phrase[] array occupies (excluding null) is: [%d]\n", my_string_length(phrase));
    printf("The amount of space the phrase[] array occupies (excluding null) is: [%zu]\n", strlen(phrase));

    return 0;
}