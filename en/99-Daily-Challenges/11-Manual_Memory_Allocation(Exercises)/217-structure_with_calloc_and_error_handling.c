/* Objective: Challenge with allocation of an array of structures using calloc and partial failure handling
1. Create a Student structure with the fields:
   - char name[50] (fixed array, not separately allocated)
   - int absences
   - float grade
The program should:
2. Ask the user how many students will be registered (N).
3. Use calloc(N, sizeof(Student)) to allocate a dynamic array of these structures. calloc already zeroes absences and grade (to zero) and the name fields get the first byte '\0' (empty string).
4. Check if allocation failed (NULL pointer). If it fails, display error and exit.
5. For each student (i from 0 to N-1):
   - Ask the user for: name, absences, grade.
   - Store in the array.
6. At the end, calculate and display:
   - Average grade of the entire class.
   - How many students have absences > 5.
   - Name of the student with the highest grade (if tie, show the first found).
7. Free the array with free.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int absences;
    float grade;
};

int main()
{
    char student_highest_grade[50];
    int students_missing = 0;
    float highest_grade = 0;
    int registered_students_count = 0;
    float grade_average = 0;

    printf("How many students will be registered: \n");
    scanf("%d", &registered_students_count);

    if (registered_students_count <= 0 || scanf("%d", &registered_students_count) != 1)
    {
        fprintf(stderr, "ERROR: Number entered is less than or equal to 0 or letters were entered instead of numbers\n");
        return 1;
    }

    struct Student *students = calloc(registered_students_count, sizeof(struct Student));

    if (students == NULL)
    {
        fprintf(stderr, "Error allocating memory\n");
        return 1;
    }

    for (int i = 0; i < registered_students_count; i++)
    {
        printf("What is the name of student [%d]: \n", i + 1);
        scanf("%49s", students[i].name);
        printf("\n");
        printf("How many absences does student [%d] have: \n", i + 1);
        scanf("%d", &students[i].absences);
        printf("\n");
        printf("What is the grade of student [%d]: \n", i + 1);
        scanf("%f", &students[i].grade);

        if (students[i].absences > 5)
        {
            students_missing++;
        }

        grade_average = (students[i].grade + grade_average);

        if (highest_grade < students[i].grade)
        {
            highest_grade = students[i].grade;
            strcpy(student_highest_grade, students[i].name);
        }
    }

    grade_average = grade_average / registered_students_count;

    printf("The class grade average is: [%.2f]\n", grade_average);
    printf("\n");
    printf("There are [%d] students with more than 5 absences\n", students_missing);
    printf("\n");
    printf("The student with the highest grade is [%s] with grade [%.2f]\n", student_highest_grade, highest_grade);

    free(students);

    students = NULL;

    return 0;
}