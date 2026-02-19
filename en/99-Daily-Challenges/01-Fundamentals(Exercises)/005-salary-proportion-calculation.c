#include <stdio.h>
#include <stdlib.h>

// 5 - Write an algorithm that reads the minimum wage value and a user's salary value, calculates how many minimum wages this
// user earns, and prints the result on the screen. (Base for Minimum Wage: $ 1,293.20).

int main () {

    float salario_Base = 1293.20;
    float salario_Usuario;

    printf("How much salary do you receive: ");
    scanf("%f", &salario_Usuario);
    printf("You receive a total of: %f minimum wages", salario_Usuario / salario_Base);

}