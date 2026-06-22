/* Objective: Practice correctly declaring literal constants by forcing their types with standard suffixes.
Instructions:
1. Declare an unsigned int variable called population and assign the value 3000 using the appropriate suffix.
2. Declare an unsigned long long variable called star_distance and assign the value 999999999999 using the appropriate combined suffix.
3. Print both on the screen using the correct format specifiers (%u and %llu).
Reflection: What happens if you reverse the suffix order (e.g., using LLU instead of ULL)? Test it in your compiler. */

#include <stdio.h>

int main() {

    unsigned int population = 3000U;


    unsigned long long star_distance = 999999999999ULL;


    printf("Population: %u\n", population);
    printf("Star distance: %llu\n", star_distance);

    return 0;
}