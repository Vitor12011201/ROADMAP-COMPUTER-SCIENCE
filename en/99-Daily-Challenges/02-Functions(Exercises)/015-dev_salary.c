/* Pass-by-value does not modify the original variable.
Rewrite the code from Exercise 2 (salary) so the raise actually works,
making the function return the new value and having 'main' update the variable. */

#include <stdio.h>

float increase_salary(float salary)
{
    salary = salary + 500.00;
    return salary;
}

int main ()
{
    float salary_1 = 2000.00;

    printf("Congratulations! You've received a salary raise.\n");

    salary_1 = increase_salary(salary_1);

    printf("Your new salary is: %.2f\n", salary_1);

    return 0;
}