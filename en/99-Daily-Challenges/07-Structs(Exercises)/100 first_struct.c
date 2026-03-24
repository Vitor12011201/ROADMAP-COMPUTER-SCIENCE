/* Objective: Learn how to define a structure and how to access the "slots" inside it using the dot operator (.).
1. Define the Struct: Outside of main, create a struct Player that has:
   - An integer score.
   - A float experience_level.
2. In main: Declare a variable named p1 of type struct Player.
3. Assign the value 100 to the score and 1.5 to the level.
4. Print these values to the screen using p1.score and p1.experience_level. */

#include <stdio.h>

struct player {
    int score;
    float experience_level;
};

int main() {
    struct player p1 = {100, 1.5};

    printf("The player's score is: [%d]\n", p1.score);
    printf("The player's experience level is: [%.2f]\n", p1.experience_level);

    return 0;
}