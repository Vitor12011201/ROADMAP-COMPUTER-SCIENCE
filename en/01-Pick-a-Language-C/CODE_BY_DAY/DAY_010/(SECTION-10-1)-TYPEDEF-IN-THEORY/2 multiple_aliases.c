#include <stdio.h>

/* OBJECTIVE: Demonstrate that you can create multiple names for the same type
 * in a single line, using commas.
 */

// All these names are now synonyms for 'int'
typedef int kilometers, meters, centimeters;

int main() {
    kilometers distance = 5;
    meters m = 5000;
    centimeters c = 500000;

    printf("%d km is %d meters or %d cm.\n", distance, m, c);

    return 0;
}