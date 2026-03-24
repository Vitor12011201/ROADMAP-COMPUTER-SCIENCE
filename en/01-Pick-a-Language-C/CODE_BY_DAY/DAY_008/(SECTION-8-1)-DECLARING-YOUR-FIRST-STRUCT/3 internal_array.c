#include <stdio.h>
#include <string.h>

struct User {
    char name[20]; // Fixed array: allows later modification with strcpy
    int id;
};

int main() {
    struct User user1;

    user1.id = 101;

    // Since 'name' is an array, we cannot do user1.name = "Bebeto"
    // We must copy the bytes into the struct's memory
    strcpy(user1.name, "Bebeto");

    printf("User: %s | ID: %d\n", user1.name, user1.id);

    return 0;
}