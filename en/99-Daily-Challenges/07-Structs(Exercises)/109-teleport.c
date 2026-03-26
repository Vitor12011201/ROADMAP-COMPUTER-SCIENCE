/* Objective: Understand memory efficiency and actual data modification.
1. Create a Player struct with int x, int y, and int energy.
2. Create a function called teleport(struct Player *p, int new_x, int new_y).
3. This function should:
   - Change the player's x and y coordinates to the new values.
   - Decrease their energy by 10 points.
4. In main, create the player at position (0,0) with 100 energy.
5. Call the function and print the player's data inside main to prove they actually moved and got tired. */

#include <stdio.h>

struct player {
    int x;
    int y;
    int energy;
};

void teleport(struct player *p, int new_x, int new_y) {

    (*p).y = new_y;
    (*p).x = new_x;


    if (new_x != 0 || new_y != 0) {
        (*p).energy = (*p).energy - 10;
    }
}

int main() {

    struct player p_1 = {.x = 0, .y = 0, .energy = 100};

    printf("Player is at position (%d,%d) with [%d energy]\n", p_1.x, p_1.y, p_1.energy);


    teleport(&p_1, 100, 250);

    printf("\n");
    printf("The player used teleport!\n");
    printf("Player is now at position (%d,%d) with [%d energy]\n", p_1.x, p_1.y, p_1.energy);

    return 0;
}