#include <stdio.h>

/* Write a C program that:
Asks the user to enter an integer
If the number is:
greater than 0 → show: Positive number
less than 0 → show: Negative number
equal to 0 → show: Neutral number */

int main () {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Your number is Positive");
    } else if (n < 0) {
        printf("Your number is Negative");
    } else {
        printf("Your number is Neutral");
    }
}