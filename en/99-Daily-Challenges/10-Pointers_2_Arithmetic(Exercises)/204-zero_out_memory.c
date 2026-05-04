/* OBJECTIVE: Create your own simplified version of a byte manipulation function (memset style).
1. Create a function 'void zero_out(void *data, int bytes)'.
2. Inside the function, convert the void * to char * to navigate byte by byte.
3. Use a loop to set the value 0 in each byte.
4. In main, create an 'int numbers[3] = {10, 20, 30};' and a 'double grade = 9.5;'.
5. Use your zero_out function to clear both (remember to use sizeof to pass the correct amount of bytes).
6. Print the values after clearing to confirm they have become zero.
*/

#include <stdio.h>

void zero_out(void *data, int bytes)
{

    char *ptr = (char *)data;
    for (int i = 0; i < bytes; i++)
    {
        ptr[i] = 0;
    }
}

int main()
{
    int numbers[3] = {10, 20, 30};
    double grade = 9.5;

    printf("BEFORE FUNCTION: numbers [%d], [%d], [%d]\n", numbers[0], numbers[1], numbers[2]);
    printf("BEFORE FUNCTION: grade %.2f\n", grade);

    printf("\n");

    zero_out(numbers, sizeof(numbers));
    zero_out(&grade, sizeof(grade));

    printf("AFTER FUNCTION: numbers [%d], [%d], [%d]\n", numbers[0], numbers[1], numbers[2]);
    printf("AFTER FUNCTION: grade %.2f\n", grade);

    return 0;
}