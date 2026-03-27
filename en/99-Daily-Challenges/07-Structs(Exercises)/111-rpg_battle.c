/* Objective: Simulate an interaction between two structs using pointers and arrows.
1. Create a Character struct with char *name, int health, and int strength.
2. Create a function void attack(struct Character *attacker, struct Character *defender).
The logic is: the defender's health should decrease based on the attacker's strength.
Example: defender->health -= attacker->strength;
3. In main, create the "Warrior" (Health 100, Strength 20) and the "Orc" (Health 50, Strength 10).
4. Have the Warrior attack the Orc and print the Orc's remaining health. */

#include <stdio.h>

struct character {
    char *name;
    int health;
    int strength;
};


void attack(struct character *attacker, struct character *defender) {

    defender->health = defender->health - attacker->strength;
}

int main() {
    struct character warrior = {.name = "Link", .health = 100, .strength = 20};
    struct character orc = {.name = "Ganondorf", .health = 50, .strength = 10};

    printf("Our hero [%s] encounters the villain [%s]\n", warrior.name, orc.name);
    printf("\n");
    printf("Our villain [%s] has [%d] health points\n", orc.name, orc.health);
    printf("\n");
    printf("Our hero [%s] surprises the villain and attacks, dealing [%d] damage\n", warrior.name, warrior.strength);

    attack(&warrior, &orc);

    printf("The villain [%s] is wounded and now only has [%d] health left\n", orc.name, orc.health);

    return 0;
}