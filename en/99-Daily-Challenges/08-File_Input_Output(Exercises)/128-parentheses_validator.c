/* Objective: Use file reading to solve a logical problem.
1. Create a file named code.txt and insert a piece of C code or a math expression, like (a + b) * (c).
2. Your program should read the entire file and count:
How many parentheses open (.
How many parentheses close ).
3. At the end, the program should tell if the count "matches."
If the numbers are equal: "Balanced Parentheses."
If they are different: "Parentheses Syntax Error."
*/

#include <stdio.h>

int main() {

    FILE *fp;
    int c;
    int open_count = 0;
    int close_count = 0;

    fp = fopen("code.txt", "w");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    fputs("((15 + 20) * 45)\n", fp);

    fclose(fp);

    fp = fopen("code.txt", "r");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        if (c == '(') {
            open_count++;
        }
        else if (c == ')') {
            close_count++;
        }
    }

    printf("Number of opening parentheses: [%d]\n", open_count);
    printf("Number of closing parentheses: [%d]\n", close_count);

    if (open_count == close_count) {
        printf("Balanced Parentheses\n");
    } else {
        printf("Parentheses Syntax Error\n");
    }

    fclose(fp);

    return 0;
}