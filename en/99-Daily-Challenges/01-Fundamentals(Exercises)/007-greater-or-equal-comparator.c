#include <stdio.h>

/* Write a C program that:
Asks the user for two integers
Shows:
Which is the greater number
Or if both are equal */

int read_Number() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;
}

int main() {
    int a = read_Number();
    int b = read_Number();

    if (a > b) {
        printf("%d is GREATER than %d", a, b);
    } else if (a < b) {
        printf("%d is GREATER than %d", b, a);
    } else {
        printf("The numbers are equal");
    }

    return 0;
}