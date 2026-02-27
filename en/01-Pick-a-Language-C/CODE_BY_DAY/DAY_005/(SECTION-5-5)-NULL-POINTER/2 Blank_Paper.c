// This code shows the lifecycle of a pointer: it is born empty, we test if it is empty,
// and then we give it an address.

#include <stdio.h>

int main(void) {
    // 1. We create the pointer and say: "You point to NOTHING right now".
    int *paper_address = NULL;

    // 2. The safety test (always do this!)
    if (paper_address == NULL) {
        printf("The paper is blank. Do not go anywhere!\n");
    }

    // 3. Now, let's write down a real address on the paper
    int house_number = 100;
    paper_address = &house_number;

    // 4. We test again. Now it is NO longer NULL.
    if (paper_address != NULL) {
        printf("Now the paper has an address! The value in the house is: %d\n", *paper_address);
    }

    return 0;
}