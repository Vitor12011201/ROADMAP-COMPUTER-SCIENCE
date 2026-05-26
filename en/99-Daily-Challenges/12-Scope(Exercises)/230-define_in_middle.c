/* Objective: Practice the syntax of defining variables in the middle of a block, respecting that they cannot be used before definition
Write a program that:
1. In main, first print the message "Starting program...".
2. Then, define an int variable a = 10.
3. Print the value of a.
4. Next, define another int variable b = a * 2 (after the definition of a).
5. Print b.
6. Finally, try (commented out) to write printf("%d\n", c); before defining int c = 99;.
   - In the comment, explain the error the compiler would generate. */

#include <stdio.h>

int main()
{
    printf("Starting program...\n");

    int a = 10;

    printf("This is the value of variable a: %d\n", a);

    int b = a * 2;

    printf("This is the value of variable b: %d\n", b);

    // printf("%d\n", c);
    // This line would generate an error because variable c
    // has not been declared yet at this point in the code.

    int c = 99;

    return 0;
}