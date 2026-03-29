/* Objective: Write an entire sentence using fputs().
1. Open a file named notes.txt in "w" mode.
2. Use the fputs("Studying the C language\n", fp); function to write a sentence.
3. Close the file.

Challenge: Run the program, check the file. Then, change the mode to "a" (append),
change the sentence to "Second line!" and run it again. What happened to the file? */

#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("notes.txt", "w");

    fputs("Studying the C language\n", fp);

    fclose(fp);

    return 0;
}