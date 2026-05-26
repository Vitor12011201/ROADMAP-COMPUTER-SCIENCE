/* Objective: Demonstrate that variables can be defined after executable code, but cannot be used before the definition line
Write a program:
1. That reads an integer from the user.
2. Print "Enter a number: " and use scanf to read into a variable n.
3. After reading n, define an int variable double = n * 2 (after n is defined).
4. Print "The double is %d\n", double.
5. Now, do something intentionally wrong (but leave it commented out in the final code):
   - Before the definition of n, try to write printf("Value of n: %d\n", n);. Explain in the comment what error would occur.
6. Finally, define an int variable square = n * n; anywhere after n (can be even after the printf of double) and print the square.*/

#include <stdio.h>

int main()
{
    // printf("Value of n: %d\n", n);
    // Error: variable n has not been declared yet at this point in the code.

    int n = 0;

    printf("Enter an integer: \n");
    scanf("%d", &n);

    int double_n = n * 2;

    printf("The double is: %d\n", double_n);

    int square = n * n;

    printf("The square is: %d\n", square);

    return 0;
}