/* Objective: Practice integrating strings and numbers into a single read/write flow, ensuring you can capture different data (name, quantity, and price) from a text file and use them for a mathematical calculation.
1. Instructions: In your code, create a file named receipt.txt in write mode.
2. Write the sales data inside: product name (e.g., Monitor), quantity sold (e.g., 2), and unit price (e.g., 850.50).
3. Close the file to save the data.
4. Reopen the same receipt.txt file in read mode.
5. Use empty variables to read these three data points from the file using fscanf.
6. Calculate the total purchase value (Quantity x Price) and display a summary on the screen like this: "Product: Monitor | Total: $ 1701.00". */

#include <stdio.h>

int main()
{
    FILE *fp;
    char product[50];
    int quantity;
    float price;

    fp = fopen("receipt.txt" , "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Monitor 2 1250.30");
    fclose(fp);

    fp = fopen("receipt.txt", "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    fscanf(fp, "%s %d %f", product, &quantity, &price);

    printf("Product: %s\nQuantity: %d\nPrice: %.2f\n", product, quantity, price);
    printf("Product: %s | Total purchase value: %.2f\n", product, quantity * price);

    fclose(fp);

    return 0;
}