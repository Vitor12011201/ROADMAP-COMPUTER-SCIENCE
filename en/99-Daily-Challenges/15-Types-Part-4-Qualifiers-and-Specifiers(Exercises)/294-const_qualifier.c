/* Objective: Practice creating immutable variables and understand how the compiler uses this for safety.
Instructions:
1. Declare a float constant for the value of PI: const float PI = 3.14159f;.
2. Create a function called float calcula_area_circulo(const float raio) that takes the radius as a constant.
3. Try to modify the radius value inside the function (e.g., raio = 10.0f;) and observe the compilation error.
4. Fix the code by returning the correct formula PI * raio * raio; and print the calculated area in main. */

#include <stdio.h>

const float PI = 3.14159f;

float calcula_area_circulo(const float raio)
{
    return PI * raio * raio;
}

int main(void)
{
    float raio = 5.0f;
    float area = calcula_area_circulo(raio);

    printf("Radius: %.2f\n", raio);
    printf("Circle area: %.2f\n", area);

    return 0;
}