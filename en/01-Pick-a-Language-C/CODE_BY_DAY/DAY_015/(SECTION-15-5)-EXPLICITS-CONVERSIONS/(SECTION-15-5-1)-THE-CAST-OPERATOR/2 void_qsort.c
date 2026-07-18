#include <stdio.h>
#include <stdlib.h> // Required for the qsort function

/* OBJECTIVE: Implement a comparison function for the standard library's 'qsort'.
   Show the difference between "cast gymnastics" in a single line and the clean
   approach using intermediate local pointers recommended by Beej. */

// qsort requires the comparison function to receive two generic const void* pointers
int compare_integers(const void *elem1, const void *elem2) {
    // APPROACH 1 (Visually polluted with Inline Cast):
    // int value2 = *((const int*)elem2);

    // APPROACH 2 (Recommended by Beej - More readable and elegant):
    const int *item1 = (const int *)elem1;
    const int *item2 = (const int *)elem2;

    // Returns the mathematical difference to dictate the order of the array
    return (*item2 - *item1);
}

int main() {
    int latencies[] = {15, 42, 8, 23, 4};
    size_t total_elements = sizeof(latencies) / sizeof(latencies[0]);

    printf("--- Array Sorting with qsort and void* ---\n");

    // qsort receives: (array, total, size_of_each_item, comparison_function)
    qsort(latencies, total_elements, sizeof(int), compare_integers);

    for (size_t i = 0; i < total_elements; i++) {
        printf("Indexed latency: %d ms\n", latencies[i]);
    }

    return 0;
}