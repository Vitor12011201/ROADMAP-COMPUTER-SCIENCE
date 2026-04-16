/* Objective: Practice writing multiple records and selective reading.
1. Create a struct Student with: char name[50] and float grade.
2. In the main function, create an array with 3 students:
   Student class_list[3] = { {"Ana", 8.5}, {"Beto", 7.0}, {"Caio", 9.2} };
3. Open the file class.bin in "wb" mode and write the entire array with a single fwrite.
   Hint: The third argument of fwrite will be 3.
4. Close the file.
5. Reopen it in "rb" mode.
6. Use a while loop (fread(...)) to read one student at a time and only print the data of the student whose name is "Beto". */

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    float grade;
};

int main()
{
    struct Student class_list[3] =
    {
        {.name = "Ana" , .grade = 8.5},
        {.name = "Beto", .grade = 7.0},
        {.name = "Caio", .grade = 9.2}
    };
    struct Student temp = {0};

    FILE *fp;

    fp = fopen("class.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(class_list, sizeof(struct Student), 3, fp);

    fclose(fp);

    fp = fopen("class.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fread(&temp, sizeof(struct Student), 1, fp) > 0)
    {
        if (strcmp(temp.name, "Beto") == 0)
        {
            printf("Name: %s\nGrade: %.2f\n", temp.name, temp.grade);
        }
    }

    fclose(fp);

    return 0;
}