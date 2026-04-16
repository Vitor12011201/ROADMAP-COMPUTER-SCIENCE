/* Objective: Practice writing and reading a complete structure (struct) all at once.
1. Create a struct Person containing: char name[50] and int age.
2. In the main function, create a variable of this struct and fill it: Person p1 = {"Vitor", 22};.
3. Open the file registration.bin in "wb" mode.
4. Use fwrite to write the entire struct.
Hint: fwrite(&p1, sizeof(struct Person), 1, fp);
5. Close and reopen it in "rb" mode.
6. Create an empty struct Person p2 variable.
7. Use fread to read from the file and store the data directly into p2.
8. Print the data from p2 (p2.name and p2.age) to prove it worked. */

#include <stdio.h>

struct Person
{
    char name[50];
    int age;
};

int main()
{
    struct Person p1 = {.name = "Vitor", .age = 22};
    struct Person p2 = {0};

    FILE *fp;

    fp = fopen("registration.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(&p1, sizeof(struct Person), 1, fp);

    fclose(fp);

    fp = fopen("registration.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    fread(&p2, sizeof(struct Person), 1, fp);

    printf("Name: %s\nAge: %d\n", p2.name, p2.age);

    fclose(fp);

    return 0;
}