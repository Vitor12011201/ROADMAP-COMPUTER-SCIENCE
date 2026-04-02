/* Objective: Practice the idiomatic loop for counting elements.
1. Create a phrase.txt file with any phrase (e.g., "Learning C in Clion").
2. Use the while ((c = fgetc(fp)) != EOF) loop to traverse the file.
3. Inside the loop, use an if statement to count how many spaces (' ') exist in the file.
4. At the end, print the total number of spaces found. */

#include <stdio.h>

int main() {

    FILE *fp;
    int c;
    int counter = 0;

    fp = fopen("phrase.txt", "w");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    fputs("Learning C in Clion\n", fp);

    fclose(fp);

    fp = fopen("phrase.txt", "r");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        if (c == ' ') {
            counter++;
        }
    }

    fclose(fp);

    printf("There are %d spaces in the phrase within the file\n", counter);

    return 0;
}