#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int corinthians = 0;
    int vasco = 0;

    printf("How many goals did Corinthians score: ");
    scanf("%d", &corinthians);
    printf("How many goals did Vasco score: ");
    scanf("%d", &vasco);

    if (corinthians > vasco) {
        printf("Corinthians is the CHAMPION \n");
    } else if (vasco > corinthians) {
        printf("Vasco won \n");
    } else {
        printf("The game ended in a tie and went to penalties \n");
        srand(time(NULL));

        int kick = 0;
        int corinthiansGoals = 0;
        int vascoGoals = 0;

        while (kick < 5) {
            kick = kick + 1;

            int corinthiansPenalty = rand() % 2;
            if (corinthiansPenalty == 1) {
                printf("Corinthians Penalty: GOAL!\n");
                corinthiansGoals = corinthiansGoals + 1;
            } else {
                printf("Corinthians Penalty: MISS\n");
            }

            int vascoPenalty = rand() % 2;
            if (vascoPenalty == 1) {
                printf("Vasco Penalty: GOAL!\n");
                vascoGoals = vascoGoals + 1;
            } else {
                printf("Vasco Penalty: MISS\n");
            }
        }

        if (corinthiansGoals > vascoGoals) {
            printf("CORINTHIANS IS THE CHAMPION \n");
        } else if (vascoGoals > corinthiansGoals) {
            printf("VASCO IS THE CHAMPION \n");
        } else {
            printf("Moving to sudden death shootout \n");
            while (1) {
                int corinthiansPenalty = rand() % 2;
                int vascoPenalty = rand() % 2;

                if (corinthiansPenalty == 1) {
                    printf("Corinthians Penalty: GOAL!\n");
                    corinthiansGoals = corinthiansGoals + 1;
                } else {
                    printf("Corinthians Penalty: MISS\n");
                }

                if (vascoPenalty == 1) {
                    printf("Vasco Penalty: GOAL!\n");
                    vascoGoals = vascoGoals + 1;
                } else {
                    printf("Vasco Penalty: MISS\n");
                }

                if (corinthiansPenalty == 1 && vascoPenalty == 0) {
                    printf("CORINTHIANS IS THE CHAMPION IN SUDDEN DEATH \n");
                    break;
                } else if (vascoPenalty == 1 && corinthiansPenalty == 0) {
                    printf("VASCO IS THE CHAMPION IN SUDDEN DEATH \n");
                    break; // Adicionado break aqui para encerrar o loop se o Vasco vencer
                } else {
                    printf("The shootout continues...\n");
                }
            }
        }
    }

    getchar();
    getchar();
    return 0;
}