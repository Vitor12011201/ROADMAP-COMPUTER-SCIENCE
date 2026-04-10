#include <stdio.h>

/* OBJECTIVE: Create aliases for basic types like 'unsigned char' or 'int'.
 */

// Now 'byte' is an alias for 'unsigned char'
typedef unsigned char byte;

// Now 'integer' is an alias for 'int'
typedef int integer;

int main() {
    byte b = 255;
    integer x = 10;

    printf("Byte: %d | Integer: %d\n", b, x);

    return 0;
}