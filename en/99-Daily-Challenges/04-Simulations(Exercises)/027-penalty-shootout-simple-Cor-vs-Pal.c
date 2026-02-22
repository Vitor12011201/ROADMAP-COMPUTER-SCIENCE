#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int penaltyKicks = 0;
    int corinthiansGoals;
    int palmeirasGoals;

    printf("THE GAME BEGINS: \n");
    printf("Corinthians scored: ");
    scanf("%d", &corinthiansGoals);
    printf("Palmeiras scored: ");
    scanf("%d", &palmeirasGoals);

    if (corinthiansGoals > palmeirasGoals) {
        printf("CORINTHIANS HAS QUALIFIED FOR THE NEXT ROUND OF COPA DO BRASIL \n");
    } else if (palmeirasGoals > corinthiansGoals) {
        printf("PALMEIRAS HAS QUALIFIED FOR THE NEXT ROUND OF COPA DO BRASIL \n");
    } else {
        printf("THE GAME IS A TIE, WE ARE GOING TO PENALTIES \n");
        srand(time(NULL));

        while (penaltyKicks < 5) {
            int corinthiansPenaltyGoals = 0;
            int palmeirasPenaltyGoals = 0;
            int corinthiansScored = rand() % 2;
            int palmeirasScored = rand() % 2;

            penaltyKicks++;

            printf("Corinthians is taking the penalty and: ");
            if (corinthiansScored == 1) {
                printf("Goal for Corinthians \n");
                corinthiansPenaltyGoals++;
            } else {
                printf("Corinthians missed the penalty \n");
            }

            printf("Palmeiras is taking the penalty and: ");
            if (palmeirasScored == 1) {
                printf("Goal for Palmeiras \n");
                palmeirasPenaltyGoals++;
            } else {
                printf("Palmeiras missed the penalty \n");
            }
        }
    }
    return 0;
}