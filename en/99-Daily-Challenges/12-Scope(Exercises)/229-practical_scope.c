/* Objective: Demonstrate practical concepts of Local scope, Global scope, Static variables, Variable lifetime
Create a program that:
1. Has a global variable.
2. Creates a function with a local variable.
3. Uses a static variable to retain value between calls.
4. Shows how each variable behaves.
*/

#include <stdio.h>

int globalCounter = 0;

void increment(void)
{
    int localCounter = 0;

    static int staticCounter = 0;

    globalCounter++;
    localCounter++;
    staticCounter++;

    printf("Global: %d\n", globalCounter);
    printf("Local: %d\n", localCounter);
    printf("Static: %d\n", staticCounter);

    printf("---------------------\n");
}

int main(void)
{
    increment();
    increment();
    increment();

    return 0;
}