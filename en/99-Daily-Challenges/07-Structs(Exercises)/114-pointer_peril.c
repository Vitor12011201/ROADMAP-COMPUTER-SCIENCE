/* The program will crash or show undefined behavior.
Objective: Understand in practice what "it is not a deep copy" means.
1. Create a Person struct with char *name (pointer) and int age.
2. In main, create p1 as {.name = "Alice", .age = 25}.
3. Create p2 and set p2 = p1;.
4. Now, pay attention: change p2's age to 30.
5. The Challenge: Try to change p2's name using p2.name[0] = 'E'; (to turn it into Elice).
6. Print p1's name. */

#include <stdio.h>

struct person {
    char *name; // Pointer to a string literal (Read-only memory)
    int age;
};

int main() {
    struct person p1 = {.name = "Alice", .age = 25};
    struct person p2;

    p2 = p1;

    p2.age = 30;

    /* CRITICAL ERROR:
       p2.name points to a string literal "Alice", which is stored in
       READ-ONLY memory. Attempting to modify it will cause a
       Segmentation Fault (Crash). */
    // p2.name[0] = 'E';

    printf("p1.name: %s, p1.age: %d\n", p1.name, p1.age);
    printf("p2.name: %s, p2.age: %d\n", p2.name, p2.age);

    return 0;
}