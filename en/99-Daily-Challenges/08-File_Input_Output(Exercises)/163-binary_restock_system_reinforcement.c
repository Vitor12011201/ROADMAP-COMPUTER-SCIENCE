/* Objective: You have a file with current stock levels. Your mission is to read this file and create a restock report containing only the items that are running low.
1. Create an Item struct with: char name[30], int quantity, and float cost.
2. In the main function, create an array with 4 items:
- "Keyboard", 15 units, $ 50.00
- "Mouse", 3 units, $ 25.00
- "Monitor", 2 units, $ 600.00
- "HDMI Cable", 20 units, $ 15.00
3. Write this array to the file stock.bin using fwrite.
4. Reopen the file for reading ("rb").
5. Use a while loop (fread(...)) to iterate through the file.
6. If the item's quantity is less than 5, print to the screen: [RESTOCK] The item %s is low on stock (%d units)!.
7. At the end, display the total value invested in the stock (the sum of quantity * cost for all items). */

#include <stdio.h>

struct Item
{
    char name[30];
    int quantity;
    float cost;
};

int main()
{
    struct Item products[4] = {
        {.name = "Keyboard", .quantity = 15, .cost = 50.00},
        {.name = "Mouse", .quantity = 3, .cost = 25.00},
        {.name = "Monitor", .quantity = 2, .cost = 600.00},
        {.name = "HDMI Cable", .quantity = 20, .cost = 15.00}
    };

    struct Item temp = {0};
    float total_inventory_value = 0;

    FILE *fp;

    fp = fopen("stock.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(products, sizeof(struct Item), 4, fp);

    fclose(fp);

    fp = fopen("stock.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("--- AUDIT REPORT ---\n");

    while (fread(&temp, sizeof(struct Item), 1, fp) > 0)
    {
        if (temp.quantity < 5)
        {
            printf("[RESTOCK] The item %s is low on stock (%d units)!\n", temp.name, temp.quantity);
        }

        float current_item_value = temp.quantity * temp.cost;

        printf("Stock value for %s: $ %.2f\n", temp.name, current_item_value);

        total_inventory_value += current_item_value;
    }

    printf("------------------------------\n");
    printf("Total Inventory Investment: $ %.2f\n", total_inventory_value);

    fclose(fp);

    return 0;
}
