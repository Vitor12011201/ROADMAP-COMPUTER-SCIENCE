#include <stdio.h>

/* OBJECTIVE: Use typedef to abstract pointers from complex structures.
   This is very common in libraries to hide the fact that we are dealing
   directly with memory addresses. */

typedef struct Node {
    int data;
    struct Node *next;
} *NodePtr; // Here the '*' is part of the alias!

int main() {
    struct Node item = {100, NULL};

    // NodePtr is already a pointer to struct Node
    NodePtr list = &item;

    printf("Data in node: %d\n", list->data);
    return 0;
}