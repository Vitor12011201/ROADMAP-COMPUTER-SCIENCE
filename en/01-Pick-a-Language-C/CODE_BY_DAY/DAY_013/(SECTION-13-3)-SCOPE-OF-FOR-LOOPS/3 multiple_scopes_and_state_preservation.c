#include <stdio.h>

/* OBJECTIVE: Solve the scope loss problem. If the algorithm needs to save
   the exact index where a loop was interrupted (e.g., buffer scan or ID search),
   the control variable MUST be declared in the function's scope, not inside the 'for'. */

int main() {
    int target_index; // Declared in main() function scope
    int data[] = {10, 20, 30, 999, 50}; // 999 is our error sentinel

    // The loop uses the external variable. We don't use 'int' inside the for here.
    for (target_index = 0; target_index < 5; target_index++) {
        if (data[target_index] == 999) {
            printf("Interruption flag found!\n");
            break; // Exit the loop immediately
        }
    }

    // Since target_index was declared outside the for, it is still alive on the stack.
    // This allows analyzing exactly where the loop stopped.
    if (target_index < 5) {
        printf("Processing stopped successfully at index: %d\n", target_index);
    } else {
        printf("The loop traversed the entire array without interruptions.\n");
    }

    return 0;
}