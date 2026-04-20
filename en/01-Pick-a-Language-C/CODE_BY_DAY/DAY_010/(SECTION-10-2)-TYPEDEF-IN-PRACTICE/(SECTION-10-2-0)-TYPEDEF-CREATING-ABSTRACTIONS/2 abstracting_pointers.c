#include <stdio.h>

/* OBJECTIVE: Hide the asterisk (*) within an alias to improve readability.
 * Widely used in data structures such as Lists and Trees.
 */

struct Node {
    int value;
    struct Node *next;
};

// 'NodePtr' now means 'struct Node *'
typedef struct Node *NodePtr;

int main() {
    struct Node item = {50, NULL};

    // Instead of: struct Node *p = &item;
    NodePtr p = &item;

    printf("Value via pointer alias: %d\n", p->value);

    return 0;
}