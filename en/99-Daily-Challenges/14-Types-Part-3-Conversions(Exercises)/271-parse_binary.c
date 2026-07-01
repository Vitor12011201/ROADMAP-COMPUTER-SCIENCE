/* Objective: Use the power of the strtoul function to convert a binary string directly to a numeric integer.
Instructions:
1. Declare a string representing a number in binary: char *binary_code = "11001010";.
2. Use the strtoul function to perform the conversion. Change the base argument to 2 and, for now, pass NULL in the error detection parameter.
3. Print the final result in Decimal (%lu) and in Hexadecimal (%X). */

#include <stdio.h>
#include <stdlib.h>


int main()
{

    char *binary_code = "11001010";

    unsigned long result = strtoul(binary_code, NULL, 2);

    printf("Decimal: %lu\n", result);

    printf("Hexadecimal: %lX", result);

    return 0;

}