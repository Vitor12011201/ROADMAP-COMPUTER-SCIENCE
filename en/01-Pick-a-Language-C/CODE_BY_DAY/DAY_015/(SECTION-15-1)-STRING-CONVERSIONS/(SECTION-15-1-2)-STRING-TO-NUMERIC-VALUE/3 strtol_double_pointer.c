#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Understand the 'badchar' mechanics. By passing the address of a pointer
   (&badchar), strtoul modifies our internal pointer so that it points exactly
   to where the conversion failed, allowing perfect string validation. */

int main() {
    // A configuration string where the user mistyped a digit: put an 'x' in the middle of the decimal
    char *latency_config = "120x5";

    // We create a plain character pointer
    char *badchar;

    printf("Reading configuration: \"%s\"\n", latency_config);

    /* strtoul expects to receive a char** as the second argument.
       By passing '&badchar', we are giving strtoul permission to modify
       the address to which OUR local pointer points. */
    unsigned long value = strtoul(latency_config, &badchar, 10);

    // If strtoul successfully read the entire string, badchar will point to '\0' (end of string)
    if (*badchar == '\0') {
        printf("[SUCCESS] Value fully read: %lu\n", value);
    } else {
        printf("\n--- ERROR DETECTED ---\n");
        printf("I could only convert the initial part: %lu\n", value);
        printf("The character that broke the reading was:   '%c'\n", *badchar);
        printf("Remaining text that was rejected:        \"%s\"\n", badchar);
    }

    return 0;
}