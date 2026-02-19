#include <stdio.h>

/* Name Registration
Create a C program that:
Asks the user for 5 names (each name up to 50 characters)
Stores the names in a string array
Creates functions to:
Display all registered names
Count how many names start with the letter 'A' (uppercase or lowercase) */

void readNames(char names[][50], int size) {
    for (int i = 0; i < size; i++) {
        printf("[%i] - Enter a name: \n", i + 1);
        scanf("%s", names[i]);
    }
}

void displayNames(char names[][50], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s was a name entered \n", names[i]);
    }
}

int countStartingWithA(char names[][50], int size) {
    int counter = 0;
    for (int i = 0; i < size; i++) {
        // Checking the first character of each string
        if (names[i][0] == 'A' || names[i][0] == 'a') {
            counter++;
            printf("(%s) is a name that starts with A \n", names[i]);
        }
    }
    printf("There are [%d] names that start with the letter A \n", counter);
    return counter;
}

int main() {
    char names[5][50];
    int size = 5;

    readNames(names, size);
    displayNames(names, size);
    countStartingWithA(names, size);

    return 0;
}