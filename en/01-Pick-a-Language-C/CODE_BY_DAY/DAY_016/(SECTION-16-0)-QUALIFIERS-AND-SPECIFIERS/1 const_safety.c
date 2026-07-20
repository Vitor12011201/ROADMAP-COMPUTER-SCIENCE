#include <stdio.h>

/* OBJECTIVE: Demonstrate the use of the 'const' qualifier. It turns a
   variable into a read‑only region of memory protected by the compiler. */

int main() {
    // A regular variable can be changed at any time
    int frame_rate = 60;
    frame_rate = 120; // Perfectly valid

    // The 'const' qualifier shields the value against accidental modifications
    const int BUFFER_LIMIT = 8;

    // If you try to uncomment the line below, the code refuses to compile:
    // BUFFER_LIMIT = 16; // ERROR: assignment of read-only variable

    printf("--- Using the const Qualifier ---\n");
    printf("Dynamic frame rate: %d FPS\n", frame_rate);
    printf("Physical buffer limit: %d (Protected)\n", BUFFER_LIMIT);

    return 0;
}