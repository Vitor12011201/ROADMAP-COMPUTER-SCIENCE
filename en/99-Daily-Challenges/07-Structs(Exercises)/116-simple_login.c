/* Objective: Compare strings and integers inside a struct.
1. Create a User (Usuario) struct with char name[20] and int password.
2. Create a "master user" in main: {"admin", 1234}.
3. Ask the user to type a name and a password. Store this in another struct called 'attempt'.
The Challenge: Compare if the 'attempt' is equal to the 'master'.
Hint: Use strcmp() for the name and == for the password.
4. If equal, print "Access Granted", otherwise "Access Denied". */

#include <stdio.h>
#include <string.h>

struct user {
    char name[20];
    int password;
};

int main() {
    struct user master_user = {.name = "admin", ".password" = 1234};
    struct user attempt;

    do {
        printf("Enter your username: \n");
        scanf("%s", attempt.name);
        printf("\n");
        printf("Enter your password: \n");
        scanf("%d", &attempt.password);

        // Logic: String comparison (strcmp) AND Integer comparison (==)
        if (strcmp(master_user.name, attempt.name) == 0 && master_user.password == attempt.password) {
            printf("Password authorized\n");
            printf("Welcome, Administrator\n");

        } else {
            printf("Access denied, try again\n");
            printf("\n");
        }

    } while (!(strcmp(master_user.name, attempt.name) == 0 && master_user.password == attempt.password));

    return 0;
}