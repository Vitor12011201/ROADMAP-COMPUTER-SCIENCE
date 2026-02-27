#include <stdio.h>

int main(void) {
    // 1. Initializing with NULL (Safety first)
    int *p = NULL;

    // 2. Before using it, we check if it "exists"
    if (p == NULL) {
        printf("Pointer p points to nothing yet!\n");
    }

    // 3. Now we give it a real address
    int age = 25;
    p = &age;

    if (p != NULL) {
        printf("Now p points to the value: %d\n", *p);
    }

    // 4. THE DANGER: Dereferencing NULL
    // int *danger = NULL;
    // *danger = 10; // This will cause a "Segmentation Fault" (your program dies)

    return 0;
}