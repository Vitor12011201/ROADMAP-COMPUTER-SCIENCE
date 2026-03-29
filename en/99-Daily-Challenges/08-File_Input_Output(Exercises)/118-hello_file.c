/* Objective: Create your first text file through code.
1. Declare a FILE *fp;.
2. Use fp = fopen("test.txt", "w"); to open a file named "test.txt" in write mode.
3. Use the fputc('A', fp); function to write the letter 'A' inside it.
VERY IMPORTANT: Use fclose(fp); at the end to save and close it. If you don't close it, Windows/Linux might not save the changes!
4. Open your project folder and check if the file appeared there. */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;

    fp = fopen("test.txt", "w");

    fputc('A', fp);

    fclose(fp);

    printf("File created and saved successfully!\n");

    return 0;
}