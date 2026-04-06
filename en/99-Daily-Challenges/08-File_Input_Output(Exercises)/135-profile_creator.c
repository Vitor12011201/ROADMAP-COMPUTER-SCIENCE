/* Objective: Practice writing different data types to the same file.
1. Create a program with three variables: char name[] = "Link", int health = 100, and float strength = 15.5.
2. Open a file named status.txt in "w" mode.
3. Use fprintf to save these data points in an organized line.
4. Use fputc to place a '!' character at the very end.
5. Close the file and check the output.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[] = "Link";
    int health = 100;
    float strength = 15.5;

    fp = fopen("status.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not open the file\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nHealth: %d\nStrength: %.2f", name, health, strength);

    fputc('!', fp);

    fclose(fp);

    return 0;
}