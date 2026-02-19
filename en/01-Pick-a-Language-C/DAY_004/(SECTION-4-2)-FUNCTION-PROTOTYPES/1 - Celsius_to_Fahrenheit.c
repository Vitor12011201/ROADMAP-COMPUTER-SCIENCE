#include <stdio.h>

// --- THIS IS THE FUNCTION PROTOTYPE ---
// It tells the compiler: "Hey, a function named 'celsius_to_f' exists,
// it receives a float and returns a float. Let it pass!".
// Note that it must end with a semicolon (;).
float celsius_to_f(float c);

int main(void) {
    float celsius_temp = 25.0;
    float result;

    // We call the function here. The compiler accepts it because it has
    // already read the prototype above and knows how the function should be handled.
    result = celsius_to_f(celsius_temp);

    printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius_temp, result);

    return 0;
}

// --- THIS IS THE FUNCTION DEFINITION ---
// This is where the actual work happens.
// It must be identical to the prototype, but now with the body inside curly braces { }.
float celsius_to_f(float c) {
    return (c * 9 / 5) + 32;
}