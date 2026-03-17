#include <stdio.h>

/*🎯 Goal
Read 3 numbers
Calculate the sum using a function
Show the result in the main function
📌 Rules
Function MUST NOT print
Function MUST return the sum
Use only array + for loop
No explicit pointers yet */

int sumNumbers(int numbers[]) {

    return numbers[0] + numbers[1] + numbers[2];
}

int main() {
    int numbers[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter a number (%d): \n", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("The sum of the numbers is: %d", sumNumbers(numbers));
}