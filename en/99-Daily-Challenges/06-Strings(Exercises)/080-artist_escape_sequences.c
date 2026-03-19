/* Goal: Master escape sequences (special characters).
Write a program that prints exactly the following phrase (including the quotes and line breaks):
1. He said: "The path is long..."
But the \shortcut\ is dangerous.
2. Tip: You will need to use \" for quotes and \\ for the backslash. */

#include <stdio.h>

int main() {

    char *poetic_text = "He said: \"The path is long...\"\nBut the \\shortcut\\ is dangerous.";

    printf("%s\n", poetic_text);

    return 0;
}