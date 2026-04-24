#include <stdio.h>

/* OBJECTIVE: Use leading uppercase letters (PascalCase) for types.
   Helps to quickly differentiate what is a TYPE (PascalCase) from what
   is a VARIABLE (usually lowercase). */

typedef struct {
    int health;
    int mana;
} PlayerStatus;

int main() {
    PlayerStatus player1 = {100, 50};
    printf("Player Health: %d\n", player1.health);
    return 0;
}