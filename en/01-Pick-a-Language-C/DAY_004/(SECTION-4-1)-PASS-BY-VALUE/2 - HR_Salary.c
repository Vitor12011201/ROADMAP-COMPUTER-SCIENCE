#include <stdio.h>

// This function receives a COPY of the salary value
void apply_bonus(float hr_salary) {
    printf("--- HR: Received the value of %.2f ---\n", hr_salary);

    // HR increases the salary locally
    hr_salary = hr_salary + 500.00;

    printf("--- HR: Calculated the new value to %.2f ---\n", hr_salary);
    // End of function: the variable 'hr_salary' is destroyed here!
}

int main(void) {
    float original_salary = 2000.00;

    printf("BEFORE the function: Salary = %.2f\n", original_salary);

    // We call the function. C does: hr_salary = original_salary
    // A copy of 2000.00 is sent to the function.
    apply_bonus(original_salary);

    // The original_salary remains 2000.00!
    // The HR's modification stayed trapped inside that function.
    printf("AFTER the function: Salary = %.2f\n", original_salary);

    return 0;
}