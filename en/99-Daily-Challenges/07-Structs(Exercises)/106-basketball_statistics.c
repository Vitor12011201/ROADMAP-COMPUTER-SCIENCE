/* Objective: Practice data precision and calculations within a struct using the new syntax.
1. Create a Game struct with the following fields: int attempted, int made, and float field_goal_percentage.
2. In main, ask the user to input the shots attempted and shots made.
3. Declare the my_game struct, initializing the attempted and made fields with the user's input (use the .field = value syntax).
4. Below that, calculate the percentage: (made / (float)attempted) * 100.
5. Store the result inside my_game.field_goal_percentage.
6. If the percentage is greater than 50.0, print "Hot hand!", otherwise, "Needs more practice!". */

#include <stdio.h>

struct game {
    int attempted;
    int made;
    float field_goal_percentage;
};

int main() {

    struct game shots = {.attempted = 0, .made = 0, .field_goal_percentage = 0};

    printf("Enter how many shots were attempted: \n");
    scanf("%d", &shots.attempted);
    printf("\n");

    printf("Enter how many of those shots were made: \n");
    scanf("%d", &shots.made);

    if (shots.attempted < shots.made) {
        printf("The number of attempted shots cannot be less than the number of shots made.\n");
        printf("Enter a number less than or equal to attempted shots: \n");
        scanf("%d", &shots.made);
    }

    printf("\n");
    printf("Total shots attempted: [%d Shots]\n", shots.attempted);
    printf("\n");
    printf("Total shots made: [%d Baskets]\n", shots.made);
    printf("\n");

    shots.field_goal_percentage = (shots.made / (float)shots.attempted) * 100;

    printf("The accuracy rate is: [%.2f percent]\n", shots.field_goal_percentage);

    if (shots.field_goal_percentage > 50) {
        printf("This player has a hot hand!\n");
    } else {
        printf("This player needs more practice.\n");
    }

    return 0;
}
