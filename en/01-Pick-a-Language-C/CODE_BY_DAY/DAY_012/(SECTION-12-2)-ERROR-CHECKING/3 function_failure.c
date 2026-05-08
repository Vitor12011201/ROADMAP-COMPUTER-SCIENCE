#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Show how a function should handle allocation failures by
   returning NULL so the caller knows that something went wrong. */

int* create_dynamic_list(int size) {
    int *list = malloc(size * sizeof(int));

    // If it fails here, we return NULL for main() to handle
    if (list == NULL) {
        return NULL;
    }

    return list;
}

int main() {
    int *my_list = create_dynamic_list(10);

    // The caller (main) is responsible for checking the return value
    if (my_list == NULL) {
        printf("Could not create the list.\n");
    } else {
        printf("List created successfully!\n");
        free(my_list);
    }

    return 0;
}