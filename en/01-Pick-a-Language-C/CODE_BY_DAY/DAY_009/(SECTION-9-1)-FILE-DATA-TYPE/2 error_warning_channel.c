#include <stdio.h>

/* OBJECTIVE: Use the standard error stream (stderr) for important messages.
 */

int main() {
    // Regular output
    fprintf(stdout, "Processing system data...\n");

    // If something goes wrong, we send it to stderr
    // This is best practice: separating regular messages from ERROR messages.
    fprintf(stderr, "ALERT: The system encountered a problem!\n");

    return 0;
}