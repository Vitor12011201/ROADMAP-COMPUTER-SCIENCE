#include <stdio.h>

int main ()
{
    int n_1 = 5;
    int n_2 = 5;
    printf("n_1: %d\n" , n_1++ + n_1++);
    printf("n_2: %d\n" , ++n_2 + ++n_2);
}