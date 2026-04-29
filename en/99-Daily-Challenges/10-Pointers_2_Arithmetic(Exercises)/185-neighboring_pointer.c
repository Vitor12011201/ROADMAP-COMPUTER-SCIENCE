/* Objective: Visualize how the memory address changes according to the type.
1. Create an 'int numbers[2] = {10, 20};' array.
2. Create an 'int *p = &numbers[0];' pointer.
3. Print the address stored in 'p' and the value '*p'.
4. Now, perform 'p++;' (this is pointer arithmetic!).
5. Print the address in 'p' and the value '*p' again.
Observe: Did the address increase by 4?
*/

#include <stdio.h>

int main() {

    int numbers[2] = {10, 20};

    int *p = &numbers[0];

    printf("Address stored in p: %p\n", (void*)p);
    printf("Value stored in *p: %d\n", *p);

    p++;

    printf("New address stored in p: %p\n", (void*)p);
    printf("New value stored in *p: %d\n", *p);

    return 0;
}