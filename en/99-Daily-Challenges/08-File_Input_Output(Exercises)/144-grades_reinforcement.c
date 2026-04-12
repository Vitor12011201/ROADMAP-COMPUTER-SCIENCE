/* Objective: Read two numbers stored inside a text file, bring them into C, and perform a mathematical operation. This is challenging because the file stores text, but C needs numbers.
1. Open the file (filename: grades.txt) in "w" mode and write two grades (e.g., 7.5 and 8.5), one on each line.
2. Close the file.
3. Reopen it in "r" mode.
4. Use fscanf to read these two values directly into two float variables.
5. Calculate the average of these two grades and print it on the screen. */

#include <stdio.h>

int main()
{
    FILE *fp;
    float grade_1;
    float grade_2;

    fp = fopen("grades.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "7.5\n8.5\n");
    fclose(fp);

    fp = fopen("grades.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening this file for reading\n");
        return 1;
    }

    fscanf(fp, "%f", &grade_1);
    fscanf(fp, "%f", &grade_2);

    printf("Grade 1 is: [%.2f]\nGrade 2 is: [%.2f]\n", grade_1, grade_2);
    printf("The average grade is: [%.2f]\n", (grade_1 + grade_2) / 2);

    fclose(fp);

    return 0;
}