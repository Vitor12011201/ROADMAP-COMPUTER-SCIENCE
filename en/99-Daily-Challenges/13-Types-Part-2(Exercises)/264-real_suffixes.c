/* Objective: Practice using suffixes in scientific notation to avoid implicit compiler conversions.
Instructions:
1. Declare a float variable called micro_radius and assign it the value $1.25 \times 10^{-4}$ using e notation and the correct suffix for float.
2. Declare a long double variable called astro_mass and assign it the value $5.97 \times 10^{24}$ using the correct suffix for maximum precision.
3. Print micro_radius using %e and astro_mass using %Le */

#include <stdio.h>

int main()
{
    float micro_radius = 1.25e-4f;
    long double astro_mass = 5.97e24L;

    printf("micro_radius: %e\n", micro_radius);
    printf("astro_mass: %Le\n", astro_mass);

    return 0;
}