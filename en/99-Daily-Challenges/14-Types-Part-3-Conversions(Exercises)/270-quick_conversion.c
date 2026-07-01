/* Objective: Practice using the atoi/atof family while being aware of their limitations.
Instructions:
1. Declare a string char *age_text = "25"; and a string char *price_text = "19.99";.
2. Use atoi to convert age to an int and atof to convert price to a float.
3. Print the numeric values adding 1 to each to prove they are now real numbers and not text.
4. Create a third conversion testing atoi("error") and print the result obtained. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *age_text = "25";
    char *price_text = "19.99";

    int age = atoi(age_text);
    float price = atof(price_text);

    printf("Age + 1 = %d\n", age + 1);
    printf("Price + 1 = %.2f\n", price + 1);

    int error_test = atoi("error");
    printf("Result of atoi(\"error\"): %d\n", error_test);

    return 0;
}