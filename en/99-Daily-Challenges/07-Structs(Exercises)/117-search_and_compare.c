/* Objective: Find a specific struct within an array.
1. Create a Product (Produto) struct with int id and float price.
2. In main, create an array of 3 products with IDs and prices of your choice.
3. Create a function int search_product(struct Product list[], int size, struct Product target).
4. The function must iterate through the array and compare the id and price of each item with the target.
5. If an exactly matching product is found (same ID and price), return the index. Otherwise, return -1. */

#include <stdio.h>

struct Product
{
    int id;
    float price;
};

int search_product(struct Product list[], int size, struct Product target)
{
    for (int i = 0; i < size; i++)
    {
        // Linear Search logic: comparing each member of the struct
        if (list[i].id == target.id && list[i].price == target.price)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    struct Product target_product = {0};

    struct Product product_list[3] = {
        {.id = 1234, .price = 120.00},
        {.id = 4567, .price = 60.00},
        {.id = 8910, .price = 1400.00}
    };

    printf("Enter Product ID: \n");
    scanf("%d", &target_product.id);
    printf("Enter Product price: \n");
    scanf("%f", &target_product.price);

    int result = search_product(product_list, 3, target_product);

    if (result == -1)
    {
        printf("Product not found\n");
    }
    else
    {
        printf("Product found at index [%d]\n", result);
    }

    return 0;
}