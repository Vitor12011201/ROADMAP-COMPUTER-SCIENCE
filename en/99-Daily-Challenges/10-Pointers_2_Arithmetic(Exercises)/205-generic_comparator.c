/* OBJECTIVE: Understand the logic of functions like qsort(), where you decide how to compare the data.
1. Create a structure 'struct Product { char name[20]; float price; };'.
2. Create an array with 3 products (e.g., "Pen", 1.50; "Notebook", 20.00; "Pencil", 1.00).
3. Create a qsort-style comparison function: 'int compare_products(const void *a, const void *b)'.
4. Inside the function, convert a and b to 'const struct Product *'.
5. The function must return 1 if the price of a is greater than b, -1 if it is less, and 0 if they are equal.
6. In main, call C's qsort function passing your product array and your comparison function.
7. Print the products sorted by price.
*/

#include <stdio.h>
#include <stdlib.h>

struct Product
{
    char name[20];
    float price;
};


int compare_products(const void *a, const void *b)
{
    const struct Product *p_1 = (const struct Product *)a;
    const struct Product *p_2 = (const struct Product *)b;

    if (p_1->price > p_2->price)
    {
        return 1;
    }
    if (p_1->price < p_2->price)
    {
        return -1;
    }
    return 0;
}

int main()
{
    struct Product products[3] = {
        {.name = "Pen", .price = 1.50},
        {.name = "Notebook", .price = 20.00},
        {.name = "Pencil", .price = 1.00}
    };

    qsort(products, 3, sizeof(struct Product), compare_products);

    printf("Products sorted by price:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s - $ %.2f\n", products[i].name, products[i].price);
    }

    return 0;
}