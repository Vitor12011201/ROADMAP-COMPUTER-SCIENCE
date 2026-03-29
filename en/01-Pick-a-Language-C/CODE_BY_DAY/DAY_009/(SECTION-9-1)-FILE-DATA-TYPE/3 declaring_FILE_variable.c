#include <stdio.h>

/* OBJECTIVE: Declare the FILE* variable that will serve as a bridge to the file.
 */

int main() {
    // We create the file "pointer". It doesn't point to anything yet (NULL).
    FILE *my_remote_control = NULL;

    if (my_remote_control == NULL) {
        printf("The remote control is not linked to any file yet.\n");
    }

    return 0;
}