/* Objective: Practice reading multiple data points per line and applying conditional logic (filtering) while reading the file.
1. In your code, create a file named grades_v2.txt in write mode.
2. Write four lines, each with a student's name and their final grade:
Vitor 9.5
Joao 4.0
Maria 8.2
Jose 5.5
3. Close the file.
4. Reopen the grades_v2.txt file in read mode.
5. Use a while loop to read each student and their grade.
6. Inside the loop, check: if the grade is greater than or equal to 6.0, print: "Student %s PASSED". Otherwise, print: "Student %s FAILED".
7. At the end, outside the loop, display how many lines the file had in total (hint: use an int counter = 0; that increments with each loop iteration). */

#include <stdio.h>

int main()
{
    FILE *fp;
    char student[50];
    float grade;
    int counter = 0;

    fp = fopen("grades_v2.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Vitor 9.5\n");
    fprintf(fp, "Joao 4.0\n");
    fprintf(fp, "Maria 8.2\n");
    fprintf(fp, "Jose 5.5\n");

    fclose(fp);

    fp = fopen("grades_v2.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fscanf(fp, "%s %f", student, &grade) != EOF)
    {
        if (grade >= 6.0)
        {
            printf("Student %s PASSED with grade: %.2f\n", student, grade);
        }
        else
        {
            printf("Student %s FAILED with grade: %.2f\n", student, grade);
        }
        counter++;
    }

    printf("\nTotal records processed: %d\n", counter);

    fclose(fp);

    return 0;
}