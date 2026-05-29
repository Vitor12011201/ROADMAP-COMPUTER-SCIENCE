/* Objective: Understand the shadowing phenomenon (when a local variable "hides" a global one with the same name).
Instructions:
1. Declare a file-scope variable int rate = 5;.
2. Create a function void calculate_without_shadow() that simply prints the value of rate.
3. Create a function void calculate_with_shadow(). Inside it, declare a local variable int rate = 20; and print its value.
4. In main, call both functions and observe how the local variable "hid" the global one within its own code block. */

#include <stdio.h>

int rate = 5;

void calculate_without_shadow(void)
{
    printf("The rate value is %d\n", rate);
}

void calculate_with_shadow(void)
{
    rate = 20;
    printf("The rate value is %d\n", rate);
}

int main()
{

    calculate_without_shadow();
    calculate_with_shadow();
    printf("Rate value: %d", rate);

    return 0;

}