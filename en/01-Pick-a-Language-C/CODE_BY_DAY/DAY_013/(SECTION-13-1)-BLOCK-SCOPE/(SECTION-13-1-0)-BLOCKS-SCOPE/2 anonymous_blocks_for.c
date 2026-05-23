#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show that we can create arbitrary blocks with braces
   just to isolate variables. Also demonstrate the scope of
   variables declared in the 'for' header (C99): they exist
   only within the loop. */

int main() {
    printf("=== Anonymous block (just braces) ===\n");

    // Start of an artificial block
    {
        int x = 100;
        printf("Inside the anonymous block: x = %d\n", x);
        // We can allocate memory here, but need to free before the block ends
        int *p = (int*)malloc(sizeof(int));
        if (p != NULL) {
            *p = 200;
            printf("  Pointer p points to %d\n", *p);
            free(p);   // Free before leaving the block
            p = NULL;
        }
    } // End of block - 'x' and 'p' (local) cease to exist

    // 'x' is no longer accessible:
    // printf("%d", x);  // ERROR!

    printf("\n=== Scope of 'for' variable ===\n");
    for (int i = 0; i < 3; i++) {
        printf("Inside the loop: i = %d\n", i);
        // Variables declared inside the loop are also local to the iteration
        int temp = i * 10;
        printf("  temp = %d\n", temp);
    }
    // 'i' and 'temp' no longer exist here:
    // printf("%d", i);  // ERROR!

    printf("\n=== Trying to use i after the loop (does not compile) ===\n");
    printf("To keep the value, declare i before the for.\n");

    return 0;
}