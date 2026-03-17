#include <stdio.h>

/* Goal: Declare, initialize, and access a basic 2D matrix.
1. Create an integer matrix int grade[3][2] (3 rows and 2 columns).
2. Initialize it manually with values representing grades of 3 students in 2 exams (e.g., Student 0: {8, 9}, Student 1: {7, 5}, Student 2: {10, 6}).
3. Print only the grade of the second exam of the third student. */

int main() {
    float grades[3][2] = {
        {6.5, 7.3}, // Student 0
        {5.3, 8.9}, // Student 1
        {7.4, 9.3}  // Student 2
    };

    printf("The third student's grades are [%.2f] and [%.2f]\n", grades[2][0], grades[2][1]);

    return 0;
}