/* Objective: Use a file-scope variable as a configuration flag that changes the behavior of other functions.
Instructions:
1. At the top of the file, declare an integer variable called int DEBUG_MODE = 0; (it will enable or disable warning messages).
2. Create a function void execute_calculation() that performs a simple calculation (like 5 * 5) and, if DEBUG_MODE is equal to 1, prints: "[WARNING] Executing structured calculation.".
3. In main, call execute_calculation() with the flag off (0). Then, change DEBUG_MODE = 1; and call the function again to see the message appear. */

#include <stdio.h>

int DEBUG_MODE = 0;

void execute_calculation()
{

    if (DEBUG_MODE == 1)
    {
        printf("[WARNING] Executing structured calculation.\n");
    }

    int result = 5 * 5;

    printf("The result of 5 x 5 is: %d\n", result);

}

int main()
{
    execute_calculation();

    DEBUG_MODE = 1;

    printf("\n");

    execute_calculation();

    return 0;
}