#include <stdio.h>
#include <string.h>

/* OBJECTIVE: Illustrate why raw memory comparison (memcmp) can fail.
 * C sometimes places empty bytes (padding) between fields to align memory.
 */

struct Example {
    char c;    // 1 byte
    // C may place 3 bytes of "padding" (garbage) here to align the int
    int i;     // 4 bytes
};

int main() {
    struct Example e1, e2;

    // Clearing memory with memset helps, but member-by-member comparison is still better
    memset(&e1, 0, sizeof(e1));
    memset(&e2, 0, sizeof(e2));

    e1.c = 'A'; e1.i = 10;
    e2.c = 'A'; e2.i = 10;

    // memcmp looks at raw bytes, including the invisible padding
    if (memcmp(&e1, &e2, sizeof(struct Example)) == 0) {
        printf("Identical memory.\n");
    } else {
        printf("Different memory (likely due to padding).\n");
    }

    return 0;
}