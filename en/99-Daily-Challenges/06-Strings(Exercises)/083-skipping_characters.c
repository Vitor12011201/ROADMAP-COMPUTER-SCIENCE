/* Goal: Use pointer arithmetic to "slice" the string.
1. Declare char *s = "Hello, World!";
2. Create a new pointer char *p = s + 7;
3. Print p using %s. */

#include <stdio.h>

int main() {

    char *s = "Hello World";
    char *p = s + 6;
    printf("%s", p);

    return 0;
}