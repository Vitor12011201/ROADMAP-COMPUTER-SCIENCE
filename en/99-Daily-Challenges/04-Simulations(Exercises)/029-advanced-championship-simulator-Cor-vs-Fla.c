#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int flamengoGoals;
    int corinthiansGoals;
    srand(time(NULL));

    char *flamengoPlayers[] = {
        "Varela", "Danilo", "Leo Pereira", "Alex Sandro", "Pulgar",
        "Jorguinho", "Carrascal", "Samuel Lino", "Arrascaeta", "Bruno Henrique"
    };

    char *corinthiansPlayers[] = {
        "Gustavo Henrique", "Andre Ramalho", "Matheus Bidu", "Mateuzinho", "Raniele",
        "Breno Bidon", "Carillo", "Rodrigo Garro", "Memphis Depay", "Yuri Alberto"
    };

    flamengoGoals = rand() % 6;
    corinthiansGoals = rand() % 6;

    printf("\n");
    printf("The Brazilian Super Cup final is about to begin!\n");
    printf("\n");
    printf("Today on the pitch: Flamengo, the Brasileirao Champion\n");
    printf("\n");
    printf("And Corinthians, the Copa do Brasil Champion\n");
    printf("-----------------------------------------------------------");
    printf("\n");
    printf("Full Time! Final Score: Corinthians %d x %d Flamengo\n", corinthiansGoals, flamengoGoals);
    printf("\n");

    for (int i = 0; i < flamengoGoals; i++) {
        int scorer = rand() % 10;
        printf("Flamengo Goal(s): %s \n", flamengoPlayers[scorer]);
    }

    for (int i = 0; i < corinthiansGoals; i++) {
        int scorer = rand() % 10;
        printf("Corinthians Goal(s): %s \n", corinthiansPlayers[scorer]);
    }

    if (flamengoGoals > corinthiansGoals) {
        printf("\nFlamengo is the Brazilian Super Cup champion!\n");
    } else if (flamengoGoals < corinthiansGoals) {
        printf("\nCorinthians is the Brazilian Super Cup champion!\n");
    } else {
        printf("The match is a tie! We're going to penalties.\n");
        printf("\n");

        int corinthiansPenGoals = 0;
        int flamengoPenGoals = 0;

        printf("The penalty shootout is starting!\n");

        int flamengoOrder[10];
        int corinthiansOrder[10];

        for (int i = 0; i < 10; i++) {
            flamengoOrder[i] = i;
            corinthiansOrder[i] = i;
        }

        // Shuffling the kicker order
        for (int i = 9; i > 0; i--) {
            int j = rand() % (i + 1);
            int temp = flamengoOrder[i];
            flamengoOrder[i] = flamengoOrder[j];
            flamengoOrder[j] = temp;

            temp = corinthiansOrder[i];
            corinthiansOrder[i] = corinthiansOrder[j];
            corinthiansOrder[j] = temp;
        }

        for (int i = 0; i <= 4; i++) {
            int flamengoKicker = flamengoOrder[i];
            int corinthiansKicker = corinthiansOrder[i];

            int flamengoShot = rand() % 2;
            int corinthiansShot = rand() % 2;

            // Flamengo's turn
            if (flamengoShot == 1) {
                flamengoPenGoals++;
                printf("\nKICK NUMBER %d (FLAMENGO): (%s) SCORED! SCORE: FLA %d x %d COR \n", i + 1, flamengoPlayers[flamengoKicker], flamengoPenGoals, corinthiansPenGoals);
            } else {
                printf("\nKICK NUMBER %d (FLAMENGO): (%s) MISSED! SCORE: FLA %d x %d COR \n", i + 1, flamengoPlayers[flamengoKicker], flamengoPenGoals, corinthiansPenGoals);
            }

            // Corinthians' turn
            if (corinthiansShot == 1) {
                corinthiansPenGoals++;
                printf("KICK NUMBER %d (CORINTHIANS): (%s) SCORED! SCORE: FLA %d x %d COR \n", i + 1, corinthiansPlayers[corinthiansKicker], flamengoPenGoals, corinthiansPenGoals);
            } else {
                printf("KICK NUMBER %d (CORINTHIANS): (%s) MISSED! SCORE: FLA %d x %d COR \n", i + 1, corinthiansPlayers[corinthiansKicker], flamengoPenGoals, corinthiansPenGoals);
            }
        }

        printf("\nFinal Penalty Score: Corinthians %d x %d Flamengo\n", corinthiansPenGoals, flamengoPenGoals);

        if (flamengoPenGoals > corinthiansPenGoals) {
            printf("FLAMENGO IS THE BRAZILIAN SUPER CUP CHAMPION!\n");
        } else if (flamengoPenGoals < corinthiansPenGoals) {
            printf("CORINTHIANS IS THE BRAZILIAN SUPER CUP CHAMPION!\n");
        } else {
            printf("STILL TIED! MOVING TO SUDDEN DEATH\n");

            int suddenDeathIndex = 5;
            printf("\nSUDDEN DEATH START! \n\n");

            while (1) {
                int flamengoKicker = flamengoOrder[suddenDeathIndex];
                int corinthiansKicker = corinthiansOrder[suddenDeathIndex];

                int flamengoShot = rand() % 2;
                int corinthiansShot = rand() % 2;

                printf("Flamengo kick by %s... ", flamengoPlayers[flamengoKicker]);
                if (flamengoShot) printf("GOAL!\n"); else printf("MISSED!\n");

                printf("Corinthians kick by %s... ", corinthiansPlayers[corinthiansKicker]);
                if (corinthiansShot) printf("GOAL!\n"); else printf("MISSED!\n");

                if (flamengoShot != corinthiansShot) {
                    if (flamengoShot > corinthiansShot) {
                        printf("\nFLAMENGO WINS IN SUDDEN DEATH!\n");
                    } else {
                        printf("\nCORINTHIANS WINS IN SUDDEN DEATH!\n");
                    }
                    break;
                }

                suddenDeathIndex++;
                if (suddenDeathIndex >= 10) {
                    printf("Out of players! Infinite sudden death!\n");
                    break;
                }
            }
        }
    }
    return 0;
}