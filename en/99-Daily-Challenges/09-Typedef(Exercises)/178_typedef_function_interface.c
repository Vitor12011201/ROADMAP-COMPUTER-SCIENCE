#include <stdio.h>

/* Objective: Use typedef to create a function pattern (signature) and apply it.
1. Create a typedef for a function pointer called 'MathOperation'. It must receive two ints and return an int.
- typedef int (*MathOperation)(int, int);
2. Create two functions: 'add' and 'subtract'.
3. Create a function called 'execute(int a, int b, MathOperation op)'. This function should simply call 'op(a, b)' and show the result.
4. In main, call the 'execute' function twice: once passing 'add' and once passing 'subtract'.
*/

typedef int (*MathOperation)(int, int);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void execute(int a, int b, MathOperation op) {
    int result = op(a, b);
    printf("Result: %d\n", result);
}

int main() {
    execute(10, 20, add);
    execute(47, 54, subtract);

    return 0;
}