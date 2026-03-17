#include <stdio.h>

/* Goal: Prove to yourself why the sizeof trick fails inside functions.
This exercise is for you to see the error happening:
Create a function called try_to_measure(int x[]).
Inside this function, try to calculate the array size using the trick: int size = sizeof(x) / sizeof(int); and print this size.
In your main, create an array int list[10] = {0,1,2,3,4,5,6,7,8,9};.
First, calculate and print its size inside the main.
Then, call the function try_to_measure(list) and see what it prints. */

int try_to_measure(int x[]) {
    int size = sizeof(x) / sizeof(int);
    return size;
}

int main() {
    int list[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int size_in_main = sizeof(list) / sizeof(int);
    int size_in_function = try_to_measure(list);

    printf("Array size inside MAIN: [%d] - (CORRECT)\n", size_in_main);
    printf("Array size inside FUNCTION: [%d] - (INCORRECT)\n", size_in_function);

    return 0;
}