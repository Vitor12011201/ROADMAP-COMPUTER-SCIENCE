/* Objective: Practice the difference between local variables and nested block variables
1. Write a program that declares:
2. An int variable x = 10 inside the main function.
3. Inside a block { } (it could be if (1) or just bare braces), declare another int variable x = 20.
4. Print the value of x inside the block and then outside the block (after the closing brace).
5. Explain (in a comment) why the values are different.
Answer: The x inside the if block has block scope,
so it equals 20 only inside the braces.
The x declared in the main function has function scope,
and remains 10 outside the block.
The inner variable temporarily "hides" the outer variable.*/

#include <stdio.h>

int main() {

    int x = 10;

    if (1) {

        int x = 20;

        printf("Value of X inside the block (Scope): %d\n", x);
        printf("\n");

    }

    printf("Value of X outside the block (Scope): %d\n", x);

    return 0;

}