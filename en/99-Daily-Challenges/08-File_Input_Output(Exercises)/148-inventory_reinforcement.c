/* Objective: Practice accumulating values read from a file. Now, you won't just look for one item; you will traverse the entire file and sum the value of all products to provide a grand total.
1. Create a file named inventory.txt in write mode.
2. Write three lines in it, each with an item and its price:
Mouse 50.00
Keyboard 120.00
Monitor 900.00
3. Close the file.
4. Reopen the file in read mode.
5. Use a while loop to read all items and prices from the file.
6. Create a float total = 0; variable before the loop. Inside the loop, with each reading, add the price read to this total.
7. At the end, print the total value of all items combined. */

#include <stdio.h>

int main()
{
    FILE *fp;
    char item[50];
    float price;
    float total = 0;

    fp = fopen("inventory.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Mouse 50.00\n");
    fprintf(fp, "Keyboard 120.00\n");
    fprintf(fp, "Monitor 900.00\n");

    fclose(fp);

    fp = fopen("inventory.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("Items list: ");

    while (fscanf(fp, "%s %f", item, &price) != EOF)
    {
        printf("| %s |", item);
        total += price;
    }

    printf("\nThe grand total is: $ %.2f\n", total);

    fclose(fp);

    return 0;
}