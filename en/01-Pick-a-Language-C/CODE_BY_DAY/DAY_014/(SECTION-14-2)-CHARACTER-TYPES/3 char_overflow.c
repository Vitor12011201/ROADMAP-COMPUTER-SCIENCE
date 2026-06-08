#include <stdio.h>

/* OBJECTIVE: Explore the numeric limits of 'unsigned char' (0 to 255).
   Using this type as a 1-byte numeric counter saves a lot of RAM,
   but requires extreme care with overflow. */

int main() {
    // unsigned char uses exactly 1 byte and goes from 0 to 255
    unsigned char counter = 255;

    printf("Initial char value: %d\n", counter);

    // What happens if we add 1 to the limit of 255?
    counter = counter + 1;

    // Just like large integers, it "wraps around" the bit clock and resets to 0
    printf("Value after overflow (255 + 1): %d\n", counter);

    // Practical example: Scanning the bits of a byte (0 to 255) safely
    printf("\nPrinting the codes of a small controlled range:\n");
    unsigned char i = 240;
    while (1) {
        printf("Code: %d -> Character: %c\n", i, i);
        
        if (i == 245) {
            break; // Stop before letting the loop run infinitely due to overflow
        }
        i++;
    }

    return 0;
}