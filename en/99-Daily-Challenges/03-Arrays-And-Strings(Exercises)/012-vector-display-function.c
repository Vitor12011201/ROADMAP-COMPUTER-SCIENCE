#include <stdio.h>

/*🧠 Prompt (for you to do)
Create a function called displayNumbers that:
Receives an array of 3 numbers
Uses a 'for' loop to display each number on the screen
In the main function:
Create the array
Read the 3 numbers using a 'for' loop
Call the function */

void displayNumbers(int numbers[]) {
    for (int i = 0; i < 3; i++) {
        printf("The numbers are: %d\n", numbers[i]);
    }
}

int main() {
    int numbers[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter a number: \n");
        scanf("%d", &numbers[i]);
    }
    displayNumbers(numbers);
}