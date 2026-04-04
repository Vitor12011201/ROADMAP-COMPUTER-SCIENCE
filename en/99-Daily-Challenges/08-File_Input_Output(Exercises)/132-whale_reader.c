/* Objective: Replicate Beej's example to understand how fscanf works.
1. Create a whales.txt file with the data provided by Beej.
2. Write the code to read this file using while (fscanf(...) != EOF).
3. Print the formatted data, but try changing the order: first mass, then name, then length.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[1024];
    float length;
    int mass;

    fp = fopen("whales.txt", "w");

    if (fp == NULL)
    {
        printf("This file does not exist\n");
        return 1;
    }

    fprintf(fp, "Blue_whale 45.3 23");
    fprintf(fp, "Right_whale 20.7 135");
    fprintf(fp, "Gray_whale 14.9 41");
    fprintf(fp, "Humpback_whale 16.0 30");

    fclose(fp);

    fp = fopen("whales.txt", "r");

    if (fp == NULL)
    {
        printf("This file does not exist\n");
        return 1;
    }

    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    {
        printf("Mass: %d | Name: %s | Length: %.2f\n", mass, name, length);
    }

    fclose(fp);

    return 0;
}