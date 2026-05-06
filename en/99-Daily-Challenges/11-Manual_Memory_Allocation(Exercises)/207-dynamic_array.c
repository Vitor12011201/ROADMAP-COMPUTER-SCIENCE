/* OBJECTIVE: Create an array whose size is defined by the user during execution.
1. Ask the user how many numbers they want to store (e.g., variable n).
2. Allocate memory for this array: 'int *array = malloc(n * sizeof(int));'.
3. Use a loop to fill the array and another to print it.
4. At the end, use 'free(array);'.
Reflection: Standard arrays like 'int a[n]' need a fixed or known size at the
start of the block. With malloc, you create whatever size you want at any time.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("How many numbers do you want to store in an array: \n");
    scanf("%d", &n);

    int *array = malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Out of memory\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the number for position[%d]: \n", i);
        scanf("%d", &array[i]);
    }

    printf("Numbers entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    free(array);

    array = NULL;

    return 0;
}