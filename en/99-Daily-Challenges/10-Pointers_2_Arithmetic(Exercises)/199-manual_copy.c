/* OBJECTIVE: Apply equivalence to copy data between two arrays without using brackets on the destination side.
1. Create an array: int source[] = {1, 2, 3, 4, 5};.
2. Create an array: int destination[5];.
3. Create a pointer: int *p_dest = destination;.
4. Use a for loop from 0 to 4 to copy the elements.
5. On the left side of the assignment, use pointer notation *(p_dest). On the right side, use array notation source[i].
6. Finally, print the destination array using only *(p_dest++) inside a loop to show that the values arrived there.
*/

#include <stdio.h>

int main()
{
    int source[] = {1, 2, 3, 4, 5};
    int destination[5];
    int *p_dest = destination;

    for (int i = 0; i < 5; i++)
    {
        *(p_dest) = source[i];
        printf("%d\n", *p_dest++);
    }

    return 0;
}