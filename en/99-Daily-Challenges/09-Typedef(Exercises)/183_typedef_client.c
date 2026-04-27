/* Objective: Use typedef to organize different data types inside a struct.
1. Create a 'typedef unsigned long long ClientID;' (for very large IDs).
2. Create an anonymous struct with typedef called 'Client' containing:
ClientID id;
char name[50];
3. Create a function 'void displayClient(Client c)' that uses the custom type name to print the data.
4. In main, register a client with a long ID (e.g., 20241000500) and display it.
*/

#include <stdio.h>
#include <string.h>

typedef unsigned long long ClientID;

typedef struct {
    ClientID id;
    char name[50];
} Client;

void displayClient(Client c) {

    printf("ID: %llu\n", c.id);
    printf("Name: %s\n", c.name);
}

int main() {
    Client c1;

    c1.id = 20241000500ULL;
    strcpy(c1.name, "Vitor Santana");

    displayClient(c1);

    return 0;
}