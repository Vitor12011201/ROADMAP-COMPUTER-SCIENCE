/* Objective: Count specific occurrences. You will simulate a cashier who needs to know how many units of a specific product were sold.
1. Create the file sales.txt in write mode.
2. Write 5 lines with this pattern (Product and Price):
Pizza 45.00
Soda 10.00
Pizza 45.00
Pizza 45.00
Soda 10.00
3. Reopen the file for reading.
4. The program must traverse the file and count only how many times the word "Pizza" appears.
5. At the end, display: "Total Pizzas sold: [quantity]". */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char item[50];
    float price = 0;
    int pizzas_sold = 0;
    int sodas_sold = 0;
    float total_pizza_revenue = 0;
    float total_soda_revenue = 0;

    fp = fopen("sales.txt" , "w");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Pizza 45.00\n");
    fprintf(fp, "Soda 10.00\n");
    fprintf(fp, "Pizza 45.00\n");
    fprintf(fp, "Pizza 45.00\n");
    fprintf(fp, "Soda 10.00\n");

    fclose(fp);

    fp = fopen("sales.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    while (fscanf(fp, "%s %f", item, &price) != EOF) {
        if (strcmp(item, "Pizza") == 0) {
            pizzas_sold++;
            total_pizza_revenue += price;
        }
        if (strcmp(item, "Soda") == 0) {
            sodas_sold++;
            total_soda_revenue += price;
        }
    }

    printf("Number of Pizzas sold: [%d], Total Pizza revenue: [%.2f]\n", pizzas_sold, total_pizza_revenue);
    printf("Number of Sodas sold: [%d], Total Soda revenue: [%.2f]\n", sodas_sold, total_soda_revenue);

    fclose(fp);

    return 0;
}