/* Objective: Handle errors (the file might not open!).
1. Attempt to open a file that does not exist in read mode ("r"), for example: fp = fopen("non_existent.txt", "r");.
2. If the file cannot be opened, fopen returns NULL.
3. Use an if (fp == NULL) statement to check this. If it is null, print "Error: The file does not exist!".
4. If it is not null, print "File opened successfully!" and close it. */

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("non_existent.txt", "r");

    if (fp == NULL)
    {
        printf("Error: The file does not exist!\n");
    }
    else
    {
        printf("File opened successfully!\n");
        fclose(fp);
    }

    return 0;
}