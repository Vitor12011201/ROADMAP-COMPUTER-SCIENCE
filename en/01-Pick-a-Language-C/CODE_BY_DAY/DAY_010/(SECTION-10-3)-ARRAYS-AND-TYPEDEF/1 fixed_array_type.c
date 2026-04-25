#include <stdio.h>

/* OBJECTIVE: Create an alias for a fixed-size integer array.
   This allows declaring lists of a specific size without using brackets in the variable declaration. */

typedef int Grades[4]; // 'Grades' now means 'int[4]'

int main() {
    // 'my_grades' is automatically a 4-position array
    Grades my_grades = {10, 8, 9, 7};

    for(int i = 0; i < 4; i++) {
        printf("Grade %d: %d\n", i + 1, my_grades[i]);
    }

    return 0;
}