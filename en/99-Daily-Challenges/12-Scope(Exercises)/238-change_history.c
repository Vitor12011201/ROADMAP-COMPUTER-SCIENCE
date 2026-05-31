/* Objective: Combine file scope with pointers and arrays to track who modified a global variable.
Instructions:
1. Declare a file-scope variable int main_data = 0;.
2. Declare a file-scope array of pointers: int *history[5]; and a counter int total_modifications = 0;.
3. Create a function void modify_data(int *source_pointer). This function must:
   - Copy the value pointed to by source_pointer into main_data.
   - Store the address of that source_pointer in the history array at the current counter position.
   - Increment the total_modifications counter.
4. In main, create two local variables (int v1 = 50; int v2 = 100;). Call the function passing their addresses.
5. At the end of main, use the global history array to print the memory addresses that modified the main data. */

#include <stdio.h>

int main_data = 0;

int *history[5];
int total_modifications = 0;

void modify_data(int *source_pointer)
{
    main_data = *source_pointer;

    history[total_modifications] = source_pointer;

    total_modifications++;
}

int main()
{
    int v1 = 50;
    int v2 = 100;

    modify_data(&v1);
    modify_data(&v2);

    printf("Final value of main_data: %d\n", main_data);

    printf("\nModification history:\n");

    for (int i = 0; i < total_modifications; i++)
    {
        printf("Address %d: %p\n", i + 1, (void *)history[i]);
    }

    return 0;
}