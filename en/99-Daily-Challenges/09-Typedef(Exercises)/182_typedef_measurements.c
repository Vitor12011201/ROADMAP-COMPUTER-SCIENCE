/* Objective: Practice bulk type swapping.
1. Create a typedef called 'Measurement' that is initially an 'int'.
2. Create an anonymous struct called 'Rectangle' with 'Measurement base;' and 'Measurement height;'.
3. In main, ask the user to enter the base and height, calculate the area, and print it.
The Test: After it works, change the 'Measurement' typedef to 'float' and see how your program now accepts decimal numbers without you having to touch anything else in the code! */

#include <stdio.h>

typedef int Measurement;

typedef struct {
    Measurement base;
    Measurement height;
} Rectangle;

int main() {
    Rectangle r;

    printf("Enter the base: ");
    scanf("%d", &r.base);

    printf("Enter the height: ");
    scanf("%d", &r.height);

    Measurement area = r.base * r.height;

    printf("Rectangle Area: %d\n", area);

    return 0;
}