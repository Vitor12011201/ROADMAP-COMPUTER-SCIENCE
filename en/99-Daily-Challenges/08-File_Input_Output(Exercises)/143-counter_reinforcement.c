/* Objective: Prove that fgets actually brings information into memory and understand what it "grabs" from the file.
1. Data File: Manually create a file named phrase.txt and write in it: C Language.
2. In your code (counter.c):
3. Open the phrase.txt file in "r" mode.
4. Create a char array: char counter[100];.
5. Use fgets to read the line.
6. Use the strlen(counter) function to find the size of the string that was read.
7. Print the phrase and the size to the console. */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char counter[100];

    fp = fopen("phrase.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "C Language");
    fclose(fp);

    fp = fopen("phrase.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "This file does not exist\n");
        return 1;
    }

    fgets(counter, sizeof(counter), fp);

    printf("Content: %s\n", counter);
    printf("File size: %zu Bytes\n", strlen(counter));

    fclose(fp);

    return 0;
}