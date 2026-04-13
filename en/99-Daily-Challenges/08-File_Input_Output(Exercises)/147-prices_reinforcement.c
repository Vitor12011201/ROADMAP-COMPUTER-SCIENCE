/* Objective: Practice selective reading. You will save two products and try to find the price of only one of them.
1. Create a file named prices.txt in write mode.
2. Write two lines in it:
Coffee 15.50
Sugar 7.20
3. Close the file.
4. Reopen the prices.txt file in read mode.
5. Ask the user to type the name of a product (e.g., Coffee).
6. Use a while loop with fscanf to read the file line by line. If the name read matches what the user typed, show the price. */

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char product[50];
    float price;
    char typed_product[50];
    float typed_price;
    int found = 0;

    fp = fopen("prices.txt", "w");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Coffee 15.50\n");
    fprintf(fp, "Sugar 7.20\n");

    fclose(fp);

    fp = fopen("prices.txt" , "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("Enter the product you want to search for: \n");
    scanf("%s", typed_product);
    printf("Enter the price of the product you want to search for: \n");
    scanf("%f", &typed_price);

    while (fscanf(fp, "%s %f", product, &price) != EOF)
    {
        if (strcmp(product, typed_product) == 0 && price == typed_price)
        {
            printf("Product: %s was found! Price: $ %.2f\n", product, price);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Product not found in the database.\n");
    }

    fclose(fp);

    return 0;
}