#include <stdio.h>

// Ask the user for 2 numbers and return the greater of the two

int greaterNumber(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n1;
    int n2;

    printf("1- Enter a number: ");
    scanf("%d", &n1);
    printf("2- Enter a number: ");
    scanf("%d", &n2);
    printf("The greater number is: %d" , greaterNumber(n1 , n2));
}