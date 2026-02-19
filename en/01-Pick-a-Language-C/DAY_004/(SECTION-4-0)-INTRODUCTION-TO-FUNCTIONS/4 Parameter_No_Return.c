#include <stdio.h>

void hi(void)
{
    printf("Hi!\n");
}

int double_value(int n)
{
    return n * 2;
}

int main(void)
{
    hi();  // calls a function with no return value (void)

    int x = 5;
    int y = double_value(x);  // calls a function with a return value

    printf("The double of %d is %d\n", x, y);
}