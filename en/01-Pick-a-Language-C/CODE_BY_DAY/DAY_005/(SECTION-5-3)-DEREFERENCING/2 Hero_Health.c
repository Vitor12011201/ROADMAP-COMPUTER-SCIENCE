#include <stdio.h>

int main(void) {
    int player_health = 100;
    int *hp_ptr = &player_health; // The pointer records where the health is stored

    printf("Initial Health: %d\n", player_health);

    // Dereferencing to cause damage
    // "Go to the address stored in hp_ptr and change the value there to 70"
    *hp_ptr = 70;

    printf("Health after the attack: %d\n", player_health); // The original variable changed!

    // We can also use it for calculations
    // "Take what is at the address and subtract 10"
    *hp_ptr = *hp_ptr - 10;

    printf("Final Health: %d\n", player_health); // Now it is 60

    return 0;
}