/* What is a function?
It's a block of code that performs a specific task.
You call the function → it executes → and returns (or not) a result.
📦 Think: it's like ordering a pizza.
You place the order → the pizzeria makes it → and delivers something to you.
*/

// Function with return value and parameters

#include <stdio.h>

// Parameter = the variable that receives data → (x, y)
int sum(int x, int y) {
    return x + y; // Returns the sum
}

// Calling the Function
int main() {
    // Argument = the actual value you send (2, 3)
    int result = sum(2, 3);
    printf("The sum of x + y = %d\n", result);
}
