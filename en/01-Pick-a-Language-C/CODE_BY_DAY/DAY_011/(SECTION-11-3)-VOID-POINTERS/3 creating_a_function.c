#include <stdio.h>

/* OBJECTIVE: Implement a simplified function that prints the bytes of any data,
   using the memcpy() logic of treating everything as a character array (bytes). */

// This function doesn't know if it receives an int, a float, or a struct
void print_bytes(void *object, int size) {
    unsigned char *p = (unsigned char *)object; // We treat it as individual bytes

    for (int i = 0; i < size; i++) {
        printf("%02x ", p[i]); // Prints the value in hexadecimal
    }
    printf("\n");
}

int main() {
    int a = 256;         // In binary, it occupies more than one byte
    float b = 1.0;
    char s[] = "C";

    printf("Bytes of int 256: ");
    print_bytes(&a, sizeof(int));

    printf("Bytes of float 1.0: ");
    print_bytes(&b, sizeof(float));

    printf("Bytes of string 'C': ");
    print_bytes(s, sizeof(s));

    return 0;
}