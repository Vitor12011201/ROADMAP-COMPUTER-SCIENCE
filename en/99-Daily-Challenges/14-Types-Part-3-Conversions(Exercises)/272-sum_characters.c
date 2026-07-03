/* Objective: Practice the trick of subtracting '0' to capture the numeric value of a typed character.
Instructions:
1. Ask the user to type a single digit (from 0 to 9) using scanf(" %c", &digit_letter); or getchar().
2. Convert this character to an integer using the subtract '0' trick.
3. Add 10 to that number and print the result with %d. */

#include <stdio.h>

int main()
{
    char user_response;

    printf("Type a single digit (from 0 to 9): \n");

    scanf(" %c", &user_response);

    int number = user_response - '0';

    int result = number + 10;

    printf("Result: %d", result);

    return 0;
}