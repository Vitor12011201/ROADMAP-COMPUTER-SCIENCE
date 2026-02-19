#include <stdio.h>

int main() {
    int grade = 7;

    // If the grade is 7 or more, they passed
    if (grade >= 7) {
        printf("Passed!\n");
    }

    // If the grade is 7 or less, they are in danger
    if (grade <= 7) {
        printf("Watch out, you are at the limit.\n");
    }

    return 0;
}