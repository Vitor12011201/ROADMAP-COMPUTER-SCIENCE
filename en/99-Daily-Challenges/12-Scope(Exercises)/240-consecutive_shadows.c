/* Objective: Practice shadowing at multiple levels of nested blocks.
Instructions:
1. Create a for loop (int i = 0; i < 3; i++).
2. Inside the for block, print the value of i.
3. Still inside the for, open a new block of braces { } (without any structure like if or while, just the bare braces).
4. Inside this new inner block, declare int i = 50; and print its value.
5. Run the program and observe how the loop count continues to work perfectly, even though i is temporarily "hidden" in the innermost block.*/

#include <stdio.h>

int main()
{

    for (int i = 0; i < 3; i++)
    {
        printf("value of i: %d\n", i);

        {
            int i = 50;
            printf("value of i: %d\n", i);
        }

    }

    return 0;

}