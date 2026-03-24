/* Objective: Use strcpy to protect original data.
1. Ask the user to type a word and store it in char password[50].
2. Create a "backup" of this word in another array called char backup[50] using strcpy.
3. Change all characters in the input string to '*' (a loop that runs until \0).
4. Print the input string (filled with asterisks) and then recover the original value by printing the backup. */

#include <stdio.h>
#include <string.h>

int main() {

    char password[50];
    printf("Enter a password: \n");
    scanf("%s", password);

    char backup[50];
    strcpy(backup, password);

    for (int i = 0; password[i] != '\0'; i++) {
        password[i] = '*';
    }

    printf("Encrypted user password: [%s]\n", password);
    printf("Password backup (original): [%s]\n", backup);

    return 0;
}