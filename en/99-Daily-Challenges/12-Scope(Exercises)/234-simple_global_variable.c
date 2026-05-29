/* Objective: Practice the concept of a variable with file scope, accessible by multiple functions
Write a program that:
1. Declare a global int counter = 0 at the beginning of the file (before any function).
2. Create a function void increment(void) that increases counter by 1.
3. Create a function void print_value(void) that prints the current value of counter.
4. In main, call increment() three times, then print_value(). */

#include <stdio.h>

int counter = 0;

void increment(void)
{
    counter = counter + 1;
}

void print_value(void)
{
    printf("Value of counter variable: %d\n", counter);
}

int main()
{
    increment();
    increment();
    increment();
    print_value();

    return 0;
}