#include <stdio.h>

// The function receives a POINTER (int *p)
// It didn't receive the health, it received the ADDRESS of where the health is.
void heal_player(int *p_health) {
    // We dereference to change the original value back in main!
    // "Go to the address I received and add 20 to whatever is there"
    *p_health = *p_health + 20;

    printf("--- Function: Used the map to heal +20 ---\n");
}

int main(void) {
    int health = 80;

    printf("Before healing: %d\n", health);

    // WAY 1: Creating a pointer beforehand and passing it
    int *pointer_to_health = &health;
    heal_player(pointer_to_health);

    // WAY 2 (More common): Passing the address directly with '&'
    // heal_player(&health);

    printf("After healing: %d\n", health); // Now it's 100!

    return 0;
}