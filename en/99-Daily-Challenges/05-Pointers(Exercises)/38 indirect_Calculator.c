/* Try to do this without using the names of variables x and y after they are created:
Create int x = 10, y = 20, sum;.
Create two pointers p1 and p2 pointing to x and y.
Calculate the sum of x and y, but use only the pointers to do the math (ex: sum = *p1 + ...).
Create a third pointer p_sum for the sum variable.
Through p_sum, change the sum result to 0.
At the end, print the actual value of the sum variable. */

#include <stdio.h>

int main () {
    int x = 10;
    int y = 20;
    printf("The sum of %d + %d = %d\n", x, y, (x + y));
    int *p_x = &x;
    int *p_y = &y;
    *p_x = x;
    *p_y = y;
    int sum = *p_x + *p_y;
    printf("The sum of %d + %d = %d\n", x , y , sum);
    int *sum_1 = &sum;
    *sum_1 = 0;
    printf("Now the result of %d + % d = %d\n", *p_x , *p_y, *sum_1);
}