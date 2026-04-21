#include <stdio.h>

/* OBJECTIVE: Define a struct and create an alias for it in a separate step. 
   This allows using either 'struct Animal' or just 'animal_t' in the code. */

struct Animal {
    char *name;
    int legs;
};

// Creating the alias
typedef struct Animal animal_t;

int main() {
    struct Animal a1 = {"Cat", 4}; 
    animal_t b1 = {"Dog", 4}; 

    printf("%s and %s have %d legs.\n", a1.name, b1.name, a1.legs);
    return 0;
}