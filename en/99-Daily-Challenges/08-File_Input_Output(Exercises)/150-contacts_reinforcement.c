/* Objective: Practice searching for specific strings within a file and handling multiple data points (name and phone number).
1. In your code, create a file named agenda.txt in write mode.
2. Write three contacts in it (Name and Phone), each on a new line:
Alice 991234567
Bruno 998765432
Caio 995554444
3. Close the file.
4. Reopen the agenda.txt file in read mode.
5. Ask the user to type a name to search for in the contacts.
6. Use a while loop to traverse the file.
7. If the name read from the file matches the name entered by the user, display their phone number.
8. If the loop ends and you haven't found the name, display: "Contact not found". */

#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char name[50];
    int phone_number;
    char typed_name[50];
    int found = 0;

    fp = fopen("contacts.txt", "w");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for writing\n");
        return 1;
    }

    fprintf(fp, "Alice 991234567\n");
    fprintf(fp, "Bruno 998765432\n");
    fprintf(fp, "Caio 995554444\n");

    fclose(fp);

    fp = fopen("contacts.txt", "r");

    if (fp == NULL) {
        fprintf(stderr, "Error opening the file for reading\n");
        return 1;
    }

    printf("Enter the name of the person you want to find: \n");
    scanf("%s", typed_name);

    while (fscanf(fp, "%s %d", name, &phone_number) != EOF) {
        if (strcmp(name, typed_name) == 0) {
            printf("The phone number for %s is [%d]\n", name, phone_number);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Contact not found\n");
    }

    fclose(fp);

    return 0;
}