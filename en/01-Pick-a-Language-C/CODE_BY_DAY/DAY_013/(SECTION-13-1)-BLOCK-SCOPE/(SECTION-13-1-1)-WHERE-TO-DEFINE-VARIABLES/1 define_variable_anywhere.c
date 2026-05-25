#include <stdio.h>

/* OBJECTIVE: Show that, in C99 and later standards, we can define
   variables anywhere in the block, not just at the beginning. We just
   cannot use a variable before its definition. */

int main() {
    int a = 10;
    printf("a = %d (defined at the beginning)\n", a);

    // Commented out: would cause a compilation error because 'b' is not yet defined
    // printf("%d\n", b);

    int b = 20;   // Defined right in the middle of the code, after other statements
    printf("b = %d (defined in the middle)\n", b);

    // We can define even further down
    for (int i = 0; i < 3; i++) {
        int c = i * 5;   // Defined inside the loop
        printf("  loop i=%d, c=%d\n", i, c);
    }

    // Mixing code and declarations
    int d;
    d = 30;
    int e = d + 5;   // Can use d because it's already defined
    printf("d = %d, e = %d\n", d, e);

    return 0;
}