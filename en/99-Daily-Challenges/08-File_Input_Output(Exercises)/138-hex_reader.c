/* Objective: Read Beej's file and display the values in Hexadecimal, like a hacker would.
1. Create the output.bin file exactly as Beej did (with numbers 5, 37, 0, 88, 255, 12).
2. In your reading program, use the fread loop.
3. Instead of %d, use printf with the %02X specifier.
Tip: %02X prints in Hexadecimal with 2 digits and uppercase letters.
4. The result should look like: 05 25 00 58 FF 0C.
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not create the file\n");
        return 1;
    }

    fwrite(bytes, sizeof(unsigned char), 6, fp);
    fclose(fp);

    fp = fopen("output.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error: Could not open the file\n");
        return 1;
    }

    fread(bytes, sizeof(unsigned char), 6, fp);

    printf("Hexdump output: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%02X ", bytes[i]);
    }
    printf("\n");

    fclose(fp);
    return 0;
}