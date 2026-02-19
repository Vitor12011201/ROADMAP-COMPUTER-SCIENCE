#include <stdio.h>
#include <stdlib.h>

// 4 - Write an algorithm that receives an integer and prints its predecessor and successor on the screen.

int main () {

    int numero;

    printf("Enter a number: ");
    scanf("%d" , &numero);
    printf("The predecessor of the number is: %d --- The successor of the number is: %d \n" , numero - 1 , numero + 1);
}