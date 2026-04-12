/* Objective: Practice comparing strings read from a file. This exercise is fundamental to understanding how programs "remember" usernames or passwords saved in text.
1. In your code, create a file named users.txt in write mode.
2. Write a username (e.g., Vitor) and a birth year (e.g., 2000) separated by a space.
3. Close the file.
4. Reopen the users.txt file in read mode.
5. Use fscanf to load the name into a char array: name_file[50] and the year into an int: year.
6. Ask the user to type a name in the console using scanf and store it in: name_typed[50].
7. Use the strcmp function (from the <string.h> library) to compare the name read from the file with the name typed by the user.
8. Display on the screen whether the user is the same or not. */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char user[50];
    char typed_user[50];
    int birth_year;
    int typed_birth_year;

    fp = fopen("users.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Vitor 2002");
    fclose(fp);

    fp = fopen("users.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    fscanf(fp, "%s %d", user, &birth_year);

    printf("Enter your username: \n");
    scanf("%s", typed_user);
    printf("Enter your birth year: \n");
    scanf("%d", &typed_birth_year);

    if (strcmp(user, typed_user) == 0 && birth_year == typed_birth_year)
    {
        printf("User found and authorized to enter the system\n");
    }
    else
    {
        printf("User does not exist in the database\n");
    }

    fclose(fp);

    return 0;
}