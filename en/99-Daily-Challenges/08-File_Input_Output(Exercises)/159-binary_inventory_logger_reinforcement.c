/* Objective: Practice writing an integer array (part IDs) and performing a full read.
1. Create an array: int ids[5] = {101, 202, 303, 404, 505};.
2. Write the entire array to parts.bin using a single fwrite.
3. Close and reopen it in "rb" mode.
4. Create an empty array: int read_ids[5];.
5. Use a single fread to pull all 5 numbers back into the read_ids array.
6. Print the read_ids array using a for loop to verify. */

#include <stdio.h>

int main()
{
    FILE *fp;
    int ids[5] = {101, 202, 303, 404, 505};
    int read_ids[5];

    fp = fopen("parts.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(ids, sizeof(int), 5, fp);

    fclose(fp);

    fp = fopen("parts.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    fread(read_ids, sizeof(int), 5, fp);

    for (int i = 0; i < 5; i++)
    {
        printf("ID Number: %d\n", read_ids[i]);
    }

    fclose(fp);

    return 0;
}