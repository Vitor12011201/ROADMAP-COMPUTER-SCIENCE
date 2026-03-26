/* Objective: Pass a struct by value (copy) for read-only purposes.
1. Create a Pet struct with char *name and int age.
2. Create a function void display_pet(struct Pet p) that only prints the data.
3. In main, initialize a pet and call the function by passing it directly. */

#include <stdio.h>

struct pet {
    char *name;
    int age;
};

void display_pet(struct pet p) {
    printf("The Pet's name is: [%s]\n", p.name);
    printf("The Pet's age is: [%d years old]\n", p.age);
}

int main() {
    struct pet dog = {.name = "Amora", .age = 5};

    display_pet(dog);

    return 0;
}