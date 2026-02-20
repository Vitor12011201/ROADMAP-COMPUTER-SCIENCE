#include <stdio.h>

// --- THE RIGHT WAY (Modern C) ---
// Using 'void' in the prototype warns the compiler:
// "If someone tries to pass a value here, throw an ERROR."
void sound_alarm(void);

// --- THE DANGEROUS WAY (Avoid!) ---
// Leaving it empty tells the compiler:
// "I have no information about parameters. Accept anything."
void old_warning();

int main(void) {

    sound_alarm(); // Works perfectly.

    // If you did: sound_alarm(10);
    // The compiler would give you an ERROR (which is good!).

    old_warning(500, "text", 3.14); // The compiler MIGHT let this pass!
    // This is dangerous, as the function doesn't know how to handle these extra data.

    return 0;
}

// In the definition, also be explicit by using void
void sound_alarm(void) {
    printf("!!! SYSTEM ALERT !!!\n");
}

void old_warning() {
    printf("Security warning issued.\n");
}