/* Create a float variable salary = 2000.0; in your main.
Create a function called give_raise.
This function must receive a pointer to float (float *p_sal).
Inside it, the function must increase the value by 10% (Hint: *p_sal = *p_sal * 1.10;).
In main, call the function passing the address of your salary and then print the final value. */

#include <stdio.h>

void salary_increase(float *ptr) {
    *ptr = *ptr * 1.10;
}

int main () {
    float salary = 1500;
    printf("The value of your salary is: %.2f\n", salary);
    printf("=================================\n");
    salary_increase(&salary);
    printf("The value of your salary with the raise is now %.2f\n", salary);
}