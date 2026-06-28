#include <stdio.h>

/* OBJECTIVE: Demonstrate the direct conversion of an integer to a
   string using 'snprintf' with a safe buffer limit. */

int main() {
    char text_buffer[20];
    int max_score = 9999;

    // Converting the int to text and storing it in the buffer
    // sizeof(text_buffer) ensures that C will only write up to 20 bytes
    snprintf(text_buffer, sizeof(text_buffer), "%d", max_score);

    // Now we can manipulate or display it as a regular string
    printf("The converted score as a string is: \"%s\"\n", text_buffer);

    return 0;
}