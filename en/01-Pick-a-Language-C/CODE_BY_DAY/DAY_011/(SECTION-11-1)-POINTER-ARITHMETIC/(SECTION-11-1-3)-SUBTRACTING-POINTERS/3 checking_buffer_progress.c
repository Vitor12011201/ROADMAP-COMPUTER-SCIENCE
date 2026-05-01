#include <stdio.h>

/* OBJECTIVE: In a data processing scenario (such as streaming),
   use pointer subtraction to determine how much of the buffer has already been processed. */

int main() {
    char buffer[100] = "VIDEO_DATA_YOUTUBE.COM";
    char *current_ptr = buffer + 15; // Simulates that 15 bytes have already been processed

    // Distance from the current pointer to the start
    long processed = current_ptr - buffer;
    // Distance from the current pointer to the end (array limit)
    long remaining = (buffer + 100) - current_ptr;

    printf("Processed: %ld bytes\n", processed);
    printf("Remaining space in buffer: %ld bytes\n", remaining);

    return 0;
}