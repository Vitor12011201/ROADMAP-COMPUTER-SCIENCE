/* OBJECTIVE: Understand the single biggest practical difference between an array and a pointer.
1. In main, declare 'int list[10];' and a pointer 'int *ptr = list;'.
2. Print 'sizeof(list)' and 'sizeof(ptr)'.
3. The Challenge: Explain (in a code comment) why the values are different, even though both "point" to the same place.
Answer: 'sizeof(list)' contains 40 Bytes in size because it occupies the entire array of 10 int items.
The pointer '*ptr' occupies 8 Bytes (on 64-bit systems) because a pointer does not store the elements themselves; it stores a memory address.
4. Try doing 'list++' and see the error the compiler gives you. Comment out this line so the code compiles, but take note of the error.
*/

#include <stdio.h>

int main()
{
    int list[10];
    int *ptr = list;

    printf("List Size: %zu Bytes\n", sizeof(list));
    printf("ptr Size: %zu Bytes\n", sizeof(ptr));

    // list++; // Error: lvalue required as increment operand.
    // Explanation: The array name (list) acts like a constant pointer; it cannot change where it points.

    return 0;
}