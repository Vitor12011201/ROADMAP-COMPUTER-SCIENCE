/* Objective: Practice comparing data read from a file with user input.
1. Write a single int master_password = 1234; into a file named secret.bin.
2. Close the file.
3. Ask the user to type a password in the console (scanf).
4. Open the file, read the master_password into a variable, and compare: if the typed password matches the one in the file, print "Access Granted". */

#include <stdio.h>

int main()
{
    FILE *fp;
    int master_password = 1234;
    int stored_pass = 0;
    int input_pass = 0;

    fp = fopen("secret.bin", "wb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fwrite(&master_password, sizeof(int), 1, fp);

    fclose(fp);

    fp = fopen("secret.bin", "rb");

    if (fp == NULL)
    {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("Enter your password: \n");
    scanf("%d", &input_pass);

    fread(&stored_pass, sizeof(int), 1, fp);

    if (stored_pass == input_pass)
    {
        printf("Access Granted\n");
    } else
    {
        printf("Access Denied\n");
    }

    fclose(fp);

    return 0;
}