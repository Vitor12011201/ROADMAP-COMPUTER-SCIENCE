/* Objective: Consolidate writing and reading multiple items at once. fwrite and fread are extremely powerful because they can handle entire memory blocks with a single command.
1. In your code, create a file named prices.bin in "wb" mode.
2. Create an array of floats: float price_list[4] = {10.50, 25.90, 7.00, 100.25};.
3. Use fwrite to write the entire array at once.
4. Close the file.
5. Reopen it in "rb" mode.
6. Create a new empty array: float read_list[4];.
7. Use fread to read the entire file and fill the read_list array at once (without using a loop for reading).
8. Use a simple for loop only to print the values of the read_list array on the screen and check if they are correct. */

#include <stdio.h>

int main() {

    FILE *fp;
    float price_list[4] = {10.50, 25.90, 7.00, 100.25};
    float read_list[4];

    fp = fopen("prices.bin", "wb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(price_list, sizeof(float), 4, fp);

    fclose(fp);

    fp = fopen("prices.bin", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    fread(read_list, sizeof(float), 4, fp);

    for (int i = 0; i < 4; i++)
    {
        printf("Item[%d]: $ %.2f\n", i, read_list[i]);
    }

    fclose(fp);

    return 0;
}