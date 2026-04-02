/* Objective: Use the line-based loop to process text data.
1. Create a poem.txt file with 4 or 5 lines.
2. Use the while (fgets(s, sizeof(s), fp) != NULL) loop to read the file.
3. Inside the loop, use the strlen(s) function (from <string.h>) to count how many characters each line has.
4. Print something like: "Line %d has %zu characters".
*/

#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char s[1024];
    int line_count = 0;

    fp = fopen("poem.txt", "w");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    fputs("The poet is a faker\n", fp);
    fputs("Who's so good at his act\n", fp);
    fputs("He even fakes that the pain\n", fp);
    fputs("He really feels is a fact.\n", fp);

    fclose(fp);

    fp = fopen("poem.txt", "r");

    if (fp == NULL) {
        printf("This file does not exist\n");
        return 1;
    }

    while (fgets(s, sizeof(s), fp) != NULL) {
        line_count++;
        printf("Line: %d | Characters: %zu\n", line_count, strlen(s));
    }

    fclose(fp);

    return 0;
}