/* Objective: Replicate the digit degradation experiment from the book to see where your compiler gives up.
Instructions:
1. Create a program that initializes float variables with numbers that progressively increase the number of significant digits (e.g., 0.1, 0.12, 0.123, 0.1234, up to 10 digits).
2. Print each one with the exact number of decimal places you tried to store.
3. Visually identify at which line the printed number started to diverge from the number you typed in the code and comment on whether it obeyed the FLT_DIG limit (6 digits). */

#include <stdio.h>

    int main()
    {
        float a = 0.1f;
        float b = 0.12f;
        float c = 0.123f;
        float d = 0.1234f;
        float e = 0.12345f;
        float f = 0.123456f;
        float g = 0.1234567f;
        float h = 0.12345678f;
        float i = 0.123456789f;
        float j = 0.1234567891f;

        printf("a = %.10f\n", a);
        printf("b = %.10f\n", b);
        printf("c = %.10f\n", c);
        printf("d = %.10f\n", d);
        printf("e = %.10f\n", e);
        printf("f = %.10f\n", f);
        printf("g = %.10f\n", g);
        printf("h = %.10f\n", h);
        printf("i = %.10f\n", i);
        printf("j = %.10f\n", j);

        return 0;
    }