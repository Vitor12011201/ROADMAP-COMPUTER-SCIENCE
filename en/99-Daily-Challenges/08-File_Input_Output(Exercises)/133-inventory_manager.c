/* Objective: Read formatted data from a file and perform calculations.
1. Create an inventory.txt file with this format: Name Quantity UnitPrice
Example:
 Keyboard 10 150.50
 Mouse 20 80.00
 Monitor 5 1200.00
2. In your code, use fscanf inside a loop to read each line.
3. For each item, calculate the Total Value (Quantity * Price).
4. Print to the console: Item: [Name] | Stock Value: $ [Total].
*/

#include <stdio.h>

int main()
{
    FILE* fp;
    char product[1024];
    int quantity;
    float price;

    fp = fopen("inventory.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not create file\n");
        return 1;
    }

    fprintf(fp, "Keyboard 10 150.00\n");
    fprintf(fp, "Mouse 20 80.00\n");
    fprintf(fp, "Monitor 5 1200.00\n");

    fclose(fp);

    fp = fopen("inventory.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: File does not exist\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %f", product, &quantity, &price) != EOF)
    {
        float total_stock_value = quantity * price;

        printf("Product: %s | Quantity: %d | Unit Price: %.2f\n", product, quantity, price);
        printf("Total stock value for [%s]: $ %.2f\n", product, total_stock_value);
        printf("------------------------------------------\n");
    }

    fclose(fp);

    return 0;
}