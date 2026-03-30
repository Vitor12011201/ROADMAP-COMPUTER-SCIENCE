/* Objective: Practice the difference between standard output and error output.
1. Use fprintf(stdout, "This is a normal message.\n"); to print something.
2. Use fprintf(stderr, "This is an error warning!\n"); immediately below.
3. In the console, both will look the same. But now you know that if you were on a server,
   you could save the error to a separate file without "cluttering" the log of normal messages. */

#include <stdio.h>

int main() {

    fprintf(stdout, "This is a normal message.\n");

    fprintf(stderr, "This is an error warning!\n");

    return 0;
}