/* Objective: Read what you wrote in the previous exercise and display it on the screen.
1. Open the file name.txt in "r" mode.
2. Create a char array: char content[50];.
3. Use fgets(content, 50, fp); to fetch what is written.
4. Use a standard printf to display the content on the screen. */

#include <stdio.h>

int main()
{
    FILE *fp;
    char content[50];

    fp = fopen("name.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file\n");
        return 1;
    }

    fprintf(fp, "My name is Vitor\n");
    fclose(fp);

    fp = fopen("name.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "This file does not exist\n");
        return 1;
    }

    fgets(content, 50, fp);

    printf("%s", content);

    fclose(fp);

    return 0;
}