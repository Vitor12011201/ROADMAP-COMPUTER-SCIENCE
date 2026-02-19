#include <stdio.h>
#include <stdbool.h> // Essential for using 'bool'

int main() {
    bool is_coding = true;
    bool is_tired = false;

    if (is_coding) {
        printf("Keep on coding!\n");
    }

    // Fun fact: If you print a bool using %d, you will see the number 1 or 0
    printf("The numeric value of true: %d\n", is_coding);

    return 0;
}