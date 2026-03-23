#include <stdio.h>

/*
 * Goal: Group different data types into a single unit.
 */
struct Character {
    char name[50];
    int level;
    float health;
};

int main() {
    // Creating a struct instance and initializing it
    struct Character player1 = {"Bebeto", 10, 100.0f};

    printf("--- Player Status ---\n");
    // We use the DOT operator (.) to access the members
    printf("Name:   %s\n", player1.name);
    printf("Level:  %d\n", player1.level);
    printf("Health: %.1f%%\n", player1.health);

    return 0;
}