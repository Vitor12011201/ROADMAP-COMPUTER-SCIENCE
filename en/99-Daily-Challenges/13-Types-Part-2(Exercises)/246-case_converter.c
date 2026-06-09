/* Objective: Use the numeric distance in the ASCII table to transform uppercase letters to lowercase without using built-in functions.
Instructions:
1. In the ASCII table, the letter 'A' is 65 and the letter 'a' is 97. The distance between any uppercase letter and its lowercase version is always 32.
2. Create a function char to_lowercase(char uppercase).
3. Inside it, do the necessary math to transform the letter to lowercase and return the result.
4. In main, ask the user to type an uppercase letter, pass it to the function, and print the result with %c. */

#include <stdio.h>

char to_lowercase(char uppercase)
{

    uppercase = uppercase + 32;

    return uppercase;

}

int main()
{

    char letter;

    printf("Type an uppercase letter: \n");
    scanf("%c", &letter);

    letter = to_lowercase(letter);

    printf("Lowercase: %c", letter);

    return 0;

}