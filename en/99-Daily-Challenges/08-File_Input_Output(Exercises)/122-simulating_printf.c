/* Objective: Understand that printf is "lazy" (a shortcut).
Create an int age = 25; variable.
1. Instead of using printf, use only fprintf(stdout, ...) to print: "The age is %d years\n".
2. Do the same with stdin using fscanf.
Hint: fscanf(stdin, "%d", &age);.
3. Print the final result. */

#include <stdio.h>

int main() {

    int age = 25;

    fprintf(stdout, "The age is: [%d years]\n", age);

    fprintf(stdout, "Enter a new age: \n");

    fscanf(stdin, "%d", &age);

    fprintf(stdout, "Now the age is: [%d years]\n", age);

    return 0;
}