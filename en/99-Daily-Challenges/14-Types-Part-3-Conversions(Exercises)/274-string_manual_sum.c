/* Objective: Combine the character trick with loops to process an entire string character by character, summing its individual values.
Instructions:
1. Declare a string containing only numbers: char *code = "12345";.
2. Create an int variable total_sum = 0;.
3. Use a while or for loop to traverse this string until finding the '\0' (NUL terminator).
4. At each iteration, take the current character, convert it to its corresponding numeric value (by subtracting '0'), and accumulate the result into total_sum.
5. At the end of the loop, print the total sum (for the string "12345", the result should be $1+2+3+4+5 = 15$). */

#include <stdio.h>

int main()
{
    char *code = "12345";
    int total_sum = 0;
    int i = 0;

    while (code[i] != '\0')
    {
        int number = code[i] - '0';
        total_sum = total_sum + number;

        i++;
    }

    printf("Total sum: %d\n", total_sum);

    return 0;
}