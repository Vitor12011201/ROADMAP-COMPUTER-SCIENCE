/* Objective: Filter specific information while reading the file.
1. Use the same whales.txt file from Exercise 132.
2. Your program should read the entire file but only print whales weighing more than 100 tons.
3. At the end, the program should display the total number of whales read and their average length.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[1024];
    float length;
    int mass;
    int valid_whales_count = 0;
    float total_length = 0;

    fp = fopen("whales.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not open file for writing\n");
        return 1;
    }

    fprintf(fp, "Blue_whale 29.9 173\n");
    fprintf(fp, "Right_whale 20.7 135\n");
    fprintf(fp, "Gray_whale 14.9 41\n");
    fprintf(fp, "Humpback_whale 16.0 30\n");

    fclose(fp);

    fp = fopen("whales.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: File does not exist\n");
        return 1;
    }

    while (fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    {
        if (mass > 100)
        {
            printf("Name: %s | Length: %.2f | Mass: %d\n", name, length, mass);
            valid_whales_count++;
            total_length += length;
        }
    }

    if (valid_whales_count > 0)
    {
        printf("\nTotal whales over 100 tons: [%d]\n", valid_whales_count);
        printf("Average length of these whales: [%.2f] meters\n", (total_length / valid_whales_count));
    }
    else
    {
        printf("\nNo whales found matching the criteria.\n");
    }

    fclose(fp);

    return 0;
}