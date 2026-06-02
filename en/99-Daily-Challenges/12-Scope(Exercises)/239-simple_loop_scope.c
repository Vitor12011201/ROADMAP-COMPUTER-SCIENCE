/* Objective: Understand where the loop variable starts and ends in practice, and how to keep the value after the loop if necessary.
Instructions:
Try to create code that uses for (int i =  ́0; i < 5; i++).
Try to print the value of i outside and after the loop, just to see the error the compiler generates.
The Fix: Change the code by declaring int i; before the loop, and remove the int from inside the for (leaving just for (i = 0; i < 5; i++)).
Print i after the loop and see what value it assumes when the loop ends.*/

#include <stdio.h>

int main()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("value of i (inside the for): %d\n", i);
    }

    printf("value of i (outside the for): %d\n", i);

    return 0;
}