#include <stdio.h>
#include <math.h> // Required for the pow() function

int main() {
    double base = 2.0;
    double exponent = 3.0;

    // pow(base, exponent)
    double result = pow(base, exponent);

    printf("%.f raised to the power of %.f is equal to %.2f\n", base, exponent, result);

    return 0;
}