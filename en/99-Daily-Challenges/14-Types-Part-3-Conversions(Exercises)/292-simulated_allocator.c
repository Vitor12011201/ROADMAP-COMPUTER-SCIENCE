/* Objective: Simulate the behavior of functions like malloc (which returns a void*) and practice safe conversion to fill a data structure.
Instructions:
1. Define a struct Player containing int id; and float score;.
2. Create a global or local array of raw bytes to simulate system memory: unsigned char raw_memory[sizeof(struct Player)];.
3. Create a generic pointer pointing to this memory: void *allocated_ptr = raw_memory;.
4. Without using intermediate assignment, use inline cast and the arrow or dot operator to access the struct members directly through allocated_ptr. Example syntax: ((struct Player *)allocated_ptr)->id = 7;. Also assign a score.
5. Print the id and score values by accessing them the same way (with inline cast). */

#include <stdio.h>

struct Player
{
    int id;
    float score;
};

int main(void)
{
    _Alignas(struct Player)
    unsigned char raw_memory[sizeof(struct Player)];

    void *allocated_ptr = raw_memory;

    ((struct Player *)allocated_ptr)->id = 7;
    ((struct Player *)allocated_ptr)->score = 95.5f;

    printf("ID: %d\n",
           ((struct Player *)allocated_ptr)->id);

    printf("Score: %.2f\n",
           ((struct Player *)allocated_ptr)->score);

    return 0;
}