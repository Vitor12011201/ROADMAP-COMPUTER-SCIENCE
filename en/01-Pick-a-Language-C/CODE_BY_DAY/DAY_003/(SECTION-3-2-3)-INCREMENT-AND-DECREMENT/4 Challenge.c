#include <stdio.h>

int main()
{
    int n_1 = 5;
    int n_2 = 5;

    // Postfix increment: Uses the current value (5) and then "schedules" the increase.
    // The compiler may interpret this as (5 + 5), resulting in 10.
    printf("n_1: %d\n", n_1++ + n_1++);

    // Prefix increment: Increases the value BEFORE using it in the expression.
    // n_2 increases to 6, then to 7. The expression becomes (7 + 7), resulting in 14.
    printf("n_2: %d\n", ++n_2 + ++n_2);

    return 0;
}