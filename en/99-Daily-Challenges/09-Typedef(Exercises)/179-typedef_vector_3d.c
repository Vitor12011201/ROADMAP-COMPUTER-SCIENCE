/* Objective: Create an alias for a small array and use it cleanly.
1. Use typedef to create a type called 'Vector3D' which is an array of 3 floats.
2. In main, declare a variable 'Vector3D point = {1.0, 2.5, 3.8};'.
3. Print the X, Y, and Z values by accessing point[0], point[1], and point[2].
*/

#include <stdio.h>

typedef float Vector3D[3];

int main() {
    Vector3D point = {1.0, 2.5, 3.8};

    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            printf("Point X = %.2f\n", point[i]);
        } else if (i == 1) {
            printf("Point Y = %.2f\n", point[i]);
        } else if (i == 2) {
            printf("Point Z = %.2f\n", point[i]);
        }
    }

    return 0;
}