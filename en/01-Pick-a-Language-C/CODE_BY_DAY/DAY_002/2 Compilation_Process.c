#include <stdio.h>

/*
Step 1 - Go to the file's folder (Directory) using the 'cd' command.
Step 2 - Compile the file with the command: gcc (filename.c) -o (executable_name).
Step 3 - Run the program with the command: ./(executable_name).
*/

int main() {
    printf("[1] Preprocessing\n");
    printf("[2] Compiling to Assembly\n");
    printf("[3] Linking...\n"); // Linking means joining pieces of code into a single executable.
    printf("Program compiled\n");
    return 0;
}