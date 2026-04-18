/* Objective: Create a program that mixes binary file handling with user-driven search.
1. Create a Product struct with int id and float price.
2. Write an array of 3 products to the file products.bin.
3. Close and reopen it for reading.
4. Ask the user to enter an ID to search for.
5. Iterate through the file using while (fread(...)) and, if the entered ID is found, display the price of that product.
6. If you reach the end of the file and find nothing, say "Product not found". */

#include <stdio.h>

struct Product {
    int id;
    float price;
};

int main() {
    int user_id = 0;
    int found = 0;

    struct Product products[3] = {
        {.id = 123456, .price = 50.34},
        {.id = 654321, .price = 32.58},
        {.id = 849394, .price = 78.40}
    };

    struct Product temp = {0};

    FILE *fp;

    fp = fopen("products.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(products, sizeof(struct Product), 3, fp);

    fclose(fp);

    fp = fopen("products.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("Enter the Product ID you want to find: \n");
    scanf("%d", &user_id);

    while (fread(&temp, sizeof(struct Product), 1, fp) > 0) {
        if (user_id == temp.id) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Product ID %d costs: $ %.2f\n", temp.id, temp.price);
    } else {
        printf("Product ID not found\n");
    }

    fclose(fp);

    return 0;

}