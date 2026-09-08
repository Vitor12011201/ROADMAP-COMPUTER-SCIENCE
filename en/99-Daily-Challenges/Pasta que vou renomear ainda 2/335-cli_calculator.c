/*
Objective: create a simple calculator using command-line arguments.

Usage:
    ./app <number1> <+|-|*|/> <number2>

Examples:
    ./app 10.5 '*' 2
    ./app 8 / 0
*/

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

static int convert_to_double(const char *text, double *result)
{
    char *end = NULL;
    double value;

    errno = 0;
    value = strtod(text, &end);

    if (text[0] == '\0' || *end != '\0' || errno == ERANGE) {
        return 0;
    }

    *result = value;
    return 1;
}

int main(int argc, char *argv[])
{
    double first_number;
    double second_number;
    double result;
    char operation;

    if (argc != 4) {
        fprintf(stderr, "Usage: %s <number1> <+|-|*|/> <number2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!convert_to_double(argv[1], &first_number) ||
        !convert_to_double(argv[3], &second_number) || argv[2][1] != '\0') {
        fprintf(stderr, "Error: provide two numbers and a valid operation.\n");
        return EXIT_FAILURE;
    }

    operation = argv[2][0];

    switch (operation) {
    case '+':
        result = first_number + second_number;
        break;
    case '-':
        result = first_number - second_number;
        break;
    case '*':
        result = first_number * second_number;
        break;
    case '/':
        if (second_number == 0.0) {
            fprintf(stderr, "Error: division by zero is not allowed.\n");
            return EXIT_FAILURE;
        }
        result = first_number / second_number;
        break;
    default:
        fprintf(stderr, "Error: invalid operation. Use +, -, * or /.\n");
        return EXIT_FAILURE;
    }

    printf("Result: %.2f\n", result);

    return EXIT_SUCCESS;
}
