/* Objective: Use the real macros from <limits.h> to discover the extremes of your own processor.
Instructions:
1. Include <stdio.h> and <limits.h>.
2. Print the maximum values of a short (SHRT_MAX), a long (LONG_MAX), and a long long (LLONG_MAX).
3. Use the %d specifier for short, %ld for long, and %lld for long long.
Reflection: Looking at the result, does your long have the same size as int or long long? */

#include <stdio.h>
#include <limits.h>

int main() {

    printf("Maximum value stored in a short: %d\n", SHRT_MAX);
    printf("\n");
    printf("Maximum value stored in a long: %ld\n", LONG_MAX);
    printf("\n");
    printf("Maximum value stored in a long long: %lld\n", LLONG_MAX);

    return 0;
}