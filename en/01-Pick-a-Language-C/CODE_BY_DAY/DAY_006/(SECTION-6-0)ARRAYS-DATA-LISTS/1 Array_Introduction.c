#include <stdio.h>

int main(void) {
    // 1. Declaration and Initialization
    // We create an integer array with 5 positions
    int grades[5] = {85, 92, 78, 90, 88};

    // 2. Accessing values (Remember: it starts at ZERO!)
    printf("The first grade is: %d\n", grades[0]); // Output: 85
    printf("The third grade is: %d\n", grades[2]);  // Output: 78

    // 3. Modifying a value
    grades[4] = 95; // Changes the last element from 88 to 95
    printf("The updated final grade is: %d\n", grades[4]);

    // 4. A common mistake (What NOT to do)
    // printf("%d", grades[10]); // DANGER: Accessing memory outside the array!

    return 0;
}