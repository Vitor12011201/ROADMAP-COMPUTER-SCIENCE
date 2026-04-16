/* Objective: Modify data within an array and save the updated version.
1. Use the same Student struct from exercise number 157.
2. Create an array with 2 students: Ana (grade 5.0) and Vitor (grade 6.0).
3. Write this array to the file final_grades.bin.
4. Before closing the program, change Vitor's grade in your array to 10.0.
5. Write the array again to the same file.
6. Reopen for reading and print both students to confirm that Vitor's grade is now 10.0. */

#include <stdio.h>

struct Student
{
    char name[50];
    float grade;
};

int main()
{
    struct Student class_list[2] = {
        {.name = "Ana", .grade = 5.0},
        {.name = "Vitor", .grade = 6.0}
    };
    struct Student temp = {0};

    FILE *fp;

    fp = fopen("final_grades.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(class_list, sizeof(struct Student), 2, fp);

    fclose(fp);

    class_list[1].grade = 10.00;

    fp = fopen("final_grades.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for overwriting\n");
        return 1;
    }

    fwrite(class_list, sizeof(struct Student), 2, fp);

    fclose(fp);

    fp = fopen("final_grades.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("UPDATED GRADE REPORT\n");
    while (fread(&temp, sizeof(struct Student), 1, fp) > 0)
    {
        printf("Student: %s\nGrade: %.2f\n", temp.name, temp.grade);
    }

    fclose(fp);

    return 0;
}