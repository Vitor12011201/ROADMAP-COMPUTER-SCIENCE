/* Objective: Use an array typedef inside a struct to organize image data.
1. Create a 'typedef unsigned char RGBChannels[3];' (Representing Red, Green, Blue).
2. Create a 'Pixel' struct containing: int x, y; and a variable of type RGBChannels called 'color'.
3. In main, create a 'Pixel p1'. Set the coordinates and assign values to the color (e.g., 255, 0, 0 for red).
4. Print the pixel data.
Reflection: Notice how 'color' inside the struct behaves like an array, but in the declaration, it looks like a standard type.
*/

#include <stdio.h>

typedef unsigned char RGBChannels[3];

typedef struct {
    int x;
    int y;
    RGBChannels color;
} Pixel;

int main() {

    Pixel p_1 = {.x = 10, .y = 20, .color = {0, 0, 255}};

    printf("Pixel Position\nX = %d\nY = %d\n", p_1.x, p_1.y);

    printf("RGBColor = {%d}, {%d}, {%d}\n", p_1.color[0], p_1.color[1], p_1.color[2]);

    return 0;
}