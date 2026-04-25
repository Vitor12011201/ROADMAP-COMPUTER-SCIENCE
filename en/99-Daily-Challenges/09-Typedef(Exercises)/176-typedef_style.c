/* Objective: Practice name standardization following a specific rule (PascalCase for types).
1. Create a typedef for 'int' called 'PositiveInteger'.
2. Create an anonymous struct with typedef called 'UserData' (PascalCase) with an id and an age.
3. In main, declare the variables using these names and print the values.
Reflection: Notice how the code seems to "speak" another language when you standardize type names.
*/

#include <stdio.h>

typedef int PositiveInteger;

typedef struct {
    PositiveInteger id;
    PositiveInteger age;
} UserData;

int main() {

    UserData user1 = {.id = 54321, .age = 25};

    printf("ID: %d\nAge: %d\n", user1.id, user1.age);

    return 0;
}