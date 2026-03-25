/* Objective: Use structs to solve a simple logical problem.
1. Create a Point struct containing float x and float y.
2. Ask the user to enter the coordinates of two different points (p1 and p2).
3. Calculate the "Midpoint" between them.
4. The Midpoint is a new Point struct where X is the average of the Xs and Y is the average of the Ys.
5. Print the result: "The midpoint between them is (%.2f, %.2f)". */

#include <stdio.h>

struct point {
    float x;
    float y;
};

int main() {
    struct point p_1;
    struct point p_2;

    printf("Enter the coordinate for x_1: \n");
    scanf("%f", &p_1.x);

    printf("Enter the coordinate for y_1: \n");
    scanf("%f", &p_1.y);

    printf("Enter the coordinate for x_2: \n");
    scanf("%f", &p_2.x);

    printf("Enter the coordinate for y_2: \n");
    scanf("%f", &p_2.y);

    printf("\n");

    printf("The coordinates x_1 and y_1 are: (%.2f, %.2f)\n", p_1.x, p_1.y);
    printf("The coordinates x_2 and y_2 are: (%.2f, %.2f)\n", p_2.x, p_2.y);

    struct point midpoint = {(p_1.x + p_2.x) / 2, (p_1.y + p_2.y) / 2};

    printf("\n");
    printf("The midpoint of these coordinates is: (%.2f, %.2f)\n", midpoint.x, midpoint.y);

    return 0;
}