#include <stdio.h>
#include <stdbool.h>

/**
 * Visual Style (a[])
 * Using 'int a[]' helps with quick code readability.
 */
bool exists_in_array(int a[], int len, int search) {
    for (int i = 0; i < len; i++) {
        if (a[i] == search) return true;
    }
    return false;
}

int main() {
    int nums[] = {10, 20, 30, 40};
    if (exists_in_array(nums, 4, 30)) {
        printf("Value found!\n");
    }
    return 0;
}