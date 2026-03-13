#include <stdio.h>

/*
 * If 'p' is the start, 'p + 1' is the next neighbor in memory.
 */
int main() {
    int grades[] = {7, 8, 9};
    int *p = grades; // Points to the 7

    printf("First grade:  %d\n", *p);
    printf("Second grade: %d\n", *(p + 1)); // Jumps to the next int
    printf("Third grade:  %d\n", *(p + 2));

    return 0;
}