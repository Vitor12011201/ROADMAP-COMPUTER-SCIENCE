/* You have a matrix representing a classroom. Each row is a student and each column is a test grade.
What you should do:
Declare a float matrix grades[3][2] (3 students, 2 grades for each).
Initialize the matrix with any grades you want (e.g., 7.5, 8.0, etc.).
You must create loops to print each student's grade, but also calculate and print the average for each of them. */

#include <stdio.h>

int main()
{
    float grades[3][2] = {0};

    // Initializing grades for 3 students (2 tests each)
    grades[0][0] = 9.4;
    grades[1][0] = 8.4;
    grades[2][0] = 7.6;
    grades[0][1] = 5.8;
    grades[1][1] = 7.9;
    grades[2][1] = 10.0;

    for (int i = 0; i < 3; i++)
    {
        float sum = 0;
        printf("Student %d: \n", i + 1);
        for (int j = 0; j < 2; j++)
        {
            printf("Grade: %.2f \n", grades[i][j]);
            sum += grades[i][j];
        }
        float average = sum / 2;
        printf("The average is: %.2f\n", average);
        printf("\n");
    }

    return 0;
}