/* Objective: Create a formatted file that Excel or Notepad can read as a table.
1. Create an array of structs: struct Product { char name[20]; int qty; float price; } with 3 items.
2. Open a file named report.csv in "w" mode.
3. Use a for loop to iterate through the array.
4. Use fprintf to save the data separated by commas (e.g., fprintf(fp, "%s,%d,%.2f\n", ...)).
5. Open this file on your computer (if you have Excel or Google Sheets, it will open as a spreadsheet!).
*/

#include <stdio.h>

struct Product
{
    char name[20];
    int quantity;
    float price;
};

int main()
{
    struct Product products[3] = {
        {.name = "Pencil", .quantity = 20, .price = 2.34},
        {.name = "Notebook", .quantity = 15, .price = 20.43},
        {.name = "Pen", .quantity = 35, .price = 5.34}
    };

    FILE *fp;

    fp = fopen("report.csv", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not open file for writing\n");
        return 1;
    }

    fprintf(fp, "Product,Quantity,Price\n");

    for (int i = 0; i < 3; i++)
    {
        fprintf(fp, "%s,%d,%.2f\n", products[i].name, products[i].quantity, products[i].price);
    }

    fclose(fp);

    return 0;
}