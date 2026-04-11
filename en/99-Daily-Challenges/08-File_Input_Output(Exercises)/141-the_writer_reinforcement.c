/* Objective: Simply create a file and write your name in it.
1. Use FILE *fp; to create the file pointer.
2. Use fp = fopen("name.txt", "w"); to open it.
3. Use fprintf(fp, "My name is [Your Name]");.
4. Use fclose(fp);.
Mission: Run the code and then check your project folder to see if the file name.txt appeared there with your name inside. */

#include <stdio.h>

int main()
{
    FILE *fp;

    // Opening the file for writing ("w")
    fp = fopen("name.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file\n");
        return 1;
    }

    fprintf(fp, "My name is Vitor\n");

    fclose(fp);

    return 0;
}