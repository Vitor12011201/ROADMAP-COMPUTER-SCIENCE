/*
Objective: validate an 11-digit Brazilian CPF received from the command line.

Usage:
    ./app <cpf-without-punctuation>

Example:
    ./app 52998224725
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int calculate_digit(const char *cpf, int starting_weight, int quantity)
{
    int sum = 0;

    for (int index = 0, weight = starting_weight; index < quantity; index++, weight--) {
        sum += (cpf[index] - '0') * weight;
    }

    sum %= 11;
    return sum < 2 ? 0 : 11 - sum;
}

static int is_valid_cpf(const char *cpf)
{
    int all_equal = 1;

    if (strlen(cpf) != 11) {
        return 0;
    }

    for (int index = 0; index < 11; index++) {
        if (!isdigit((unsigned char)cpf[index])) {
            return 0;
        }

        if (index > 0 && cpf[index] != cpf[0]) {
            all_equal = 0;
        }
    }

    if (all_equal) {
        return 0;
    }

    return calculate_digit(cpf, 10, 9) == cpf[9] - '0' &&
           calculate_digit(cpf, 11, 10) == cpf[10] - '0';
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <cpf-without-punctuation>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (!is_valid_cpf(argv[1])) {
        fprintf(stderr, "Invalid CPF. Provide exactly 11 valid digits.\n");
        return EXIT_FAILURE;
    }

    printf("Valid CPF.\n");

    return EXIT_SUCCESS;
}
