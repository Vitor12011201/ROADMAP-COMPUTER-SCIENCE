#include <stdio.h>

/* OBJECTIVE: Show that a struct can be larger than the sum of its fields.
 */

struct Example {
    char a;    // 1 byte
    // The compiler may insert 3 empty bytes (padding) here!
    int b;     // 4 bytes
};

int main() {
    struct Example e;

    // If the sum is 1 + 4 = 5, why does sizeof say 8?
    // Because the binary file will take those 3 bytes of "garbage" along with it.
    printf("Actual struct size: %zu bytes\n", sizeof(e));
    printf("This makes the file non-portable!\n");

    return 0;
}