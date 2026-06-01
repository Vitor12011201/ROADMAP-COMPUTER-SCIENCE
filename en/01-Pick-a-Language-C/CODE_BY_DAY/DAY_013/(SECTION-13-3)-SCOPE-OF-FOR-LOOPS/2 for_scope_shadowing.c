#include <stdio.h>

/* OBJECTIVE: Illustrate the concept of 'Shadowing'. By declaring a new 
   variable with the same name 'i' inside the loop braces, it hides the original 
   loop variable, occupying a different address in memory. */

int main() {
    // The outer 'i' controls the repetitions (goes from 0 to 4)
    for (int i = 0; i < 5; i++) {
        
        // This inner 'i' "shadows" the loop's 'i'
        int i = 999; 
        
        // Will always print 999, because C prioritizes the innermost active scope
        printf("Value hidden by shadowing: %d\n", i); 
    }

    return 0;
}