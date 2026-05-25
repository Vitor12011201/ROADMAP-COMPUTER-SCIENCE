#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* OBJECTIVE: Compare the C89 style (all variables at the top) with the C99 style
   (define close to use). Demonstrate how the modern style reduces errors and
   improves readability, especially with dynamic allocation. */

int main() {
    printf("=== C89 Style (all at the top) ===\n");
    // In C89, all variables would come here, even those used only later:
    int x, y, z;
    char name[50];
    int *pointer;
    int result;

    x = 10;
    y = 20;
    z = x + y;
    printf("z = %d\n", z);

    strcpy(name, "C89");
    printf("Name: %s\n", name);

    pointer = (int*)malloc(sizeof(int));
    if (pointer != NULL) {
        *pointer = 99;
        result = *pointer;
        free(pointer);
    }
    printf("Result: %d\n", result);

    printf("\n=== C99 Style (define close to use) ===\n");
    // Now we define each variable immediately before needing it
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("c = %d\n", c);

    char name2[50] = "Modern C99";
    printf("Name: %s\n", name2);

    // Definition and allocation together
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Allocation error\n");
        return 1;
    }
    *p = 99;
    int res = *p;
    free(p);
    p = NULL;
    printf("Result: %d\n", res);

    // Advantage: smaller scope for pointers, less chance of misuse
    {
        char *temp = (char*)malloc(20 * sizeof(char));
        if (temp != NULL) {
            strcpy(temp, "temporary");
            printf("Inner block: %s\n", temp);
            free(temp);
        }
        // 'temp' dies here, cannot be used afterwards
    }

    return 0;
}