/*
Objective: validate a date received from the command line in DD/MM/YYYY format.

Usage:
    ./app <date>

Examples:
    ./app 29/02/2024
    ./app 29/02/2023
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int read_digits(const char *text, int quantity, int *result)
{
    int value = 0;

    for (int index = 0; index < quantity; index++) {
        if (!isdigit((unsigned char)text[index])) {
            return 0;
        }

        value = value * 10 + (text[index] - '0');
    }

    *result = value;
    return 1;
}

static int is_leap_year(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

static int days_in_month(int month, int year)
{
    const int days_per_month[] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};

    if (month == 2 && is_leap_year(year)) {
        return 29;
    }

    return days_per_month[month - 1];
}

int main(int argc, char *argv[])
{
    const char *date;
    int day;
    int month;
    int year;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <date DD/MM/YYYY>\n", argv[0]);
        return EXIT_FAILURE;
    }

    date = argv[1];

    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/' ||
        !read_digits(date, 2, &day) || !read_digits(date + 3, 2, &month) ||
        !read_digits(date + 6, 4, &year) || year == 0 || month < 1 || month > 12 ||
        day < 1 || day > days_in_month(month, year)) {
        fprintf(stderr, "Invalid date: use a real date in DD/MM/YYYY format.\n");
        return EXIT_FAILURE;
    }

    printf("Valid date: %02d/%02d/%04d\n", day, month, year);

    return EXIT_SUCCESS;
}
