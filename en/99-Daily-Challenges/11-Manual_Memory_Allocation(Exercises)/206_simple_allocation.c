/* OBJECTIVE: Use malloc to allocate space for a single integer and understand the concept of free.
1. Include <stdlib.h>.
2. Declare an integer pointer: 'int *p;'.
3. Use 'p = malloc(sizeof(int));' to reserve space.
4. Check if p is not NULL (this happens if the PC runs out of memory).
5. Assign a value to *p, print it, and then use 'free(p);' to release the memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Out of memory\n");
        return 1;
    }

    *p = 15;

    printf("%d\n", *p);

    free(p);

    p = NULL;

    return 0;
}