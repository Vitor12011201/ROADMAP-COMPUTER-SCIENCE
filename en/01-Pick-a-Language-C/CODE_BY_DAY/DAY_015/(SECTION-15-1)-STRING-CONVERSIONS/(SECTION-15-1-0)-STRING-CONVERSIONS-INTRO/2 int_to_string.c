#include <stdio.h>

/* OBJECTIVE: Safely transform a numeric type into a text string.
   Use 'snprintf' to ensure the generated text never exceeds the maximum
   limit of the buffer allocated on the Stack. */

int main() {
    int latency_ms = 45;
    char network_message[32]; // Destination buffer for the string

    /* snprintf works like printf, but outputs the result into a string.
       The second argument (32) protects the code against Buffer Overflow.
       It automatically adds the terminating '\0' at the end. */
    snprintf(network_message, sizeof(network_message), "Sunshine Latency: %d ms", latency_ms);

    // Now network_message is a valid string containing ASCII characters
    printf("Generated buffer: %s\n", network_message);
    printf("Character 0 (L) value: %c\n", network_message[0]);

    return 0;
}