/* Objective: Understand why the volatile keyword prevents the compiler from making dangerous optimizations (like deleting "useless" loops).
Instructions:
1. Create a variable representing a hardware register: volatile int register_status = 0;.
2. Create a while loop (register_status == 0) simulating waiting for a hardware update.
3. To test the code on the computer, add a simple counter inside the loop that forces the variable to change after 5 iterations: counter++; if (counter == 5) register_status = 1;.
4. In a code comment: Explain why, without the volatile keyword, an optimizing compiler (-O2 or -O3) could assume that register_status never changes inside the loop and transform the code into an infinite while (true) loop. */

#include <stdio.h>

volatile int register_status = 0;

int main(void)
{
    int counter = 0;

    printf("Waiting for register update...\n");

    while (register_status == 0)
    {
        counter++;

        printf("Iteration: %d\n", counter);

        if (counter == 5)
        {
            register_status = 1;
        }
    }

    printf("Register updated. Status: %d\n", register_status);

    /*
     * The volatile keyword tells the compiler that the value of
     * register_status may change in a way external to the normal flow
     * of the program, for example:
     *
     * - by a hardware device;
     * - by an interrupt;
     * - by a memory-mapped register.
     *
     * Therefore, the compiler must read register_status again from
     * memory on each while check.
     *
     * Without volatile, if there were no visible change inside the
     * code, a compiler with optimizations like -O2 or -O3 could
     * assume that register_status never changes during the loop.
     *
     * Thus, it could treat:
     * while (register_status == 0)
     *
     * as:
     * while (1)
     * creating an infinite loop.
     */

    return 0;
}