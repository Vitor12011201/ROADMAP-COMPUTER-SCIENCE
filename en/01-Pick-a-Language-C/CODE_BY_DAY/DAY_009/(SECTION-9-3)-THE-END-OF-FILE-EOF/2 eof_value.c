#include <stdio.h>

/* OBJECTIVE: Show that EOF is a number, which is why we need an 'int'.
 */

int main() {
    // EOF is a macro defined in stdio.h (usually its value is -1)
    printf("The numerical value of the EOF signal is: %d\n", EOF);

    // A standard 'char' sometimes cannot differentiate -1 from a real character,
    // but an 'int' can separate the two perfectly.
    return 0;
}