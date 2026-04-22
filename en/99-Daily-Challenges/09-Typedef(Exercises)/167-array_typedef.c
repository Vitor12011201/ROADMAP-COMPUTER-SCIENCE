/* Objective: Practice typedef with arrays. This is useful for ensuring that a dataset always has the same size throughout the program.
1. Use typedef to create a type called Grades, which is an array of 3 floats:
typedef float Grades[3];
2. In main, declare a variable: Grades my_grades = {8.5, 7.0, 9.2};
3. Create a loop to print the 3 grades and, at the end, calculate their average.*/

#include <stdio.h>

typedef float Grades[3];

int main() {

    Grades my_grades = {8.5, 7.0, 9.2};
    float sum = 0;

    for (int i = 0; i < 3; i++) {
        printf("My grade [%d] is: %.2f\n", i + 1, my_grades[i]);
        sum += my_grades[i];
    }

    printf("Average: %.2f\n", sum / 3);

    return 0;
}