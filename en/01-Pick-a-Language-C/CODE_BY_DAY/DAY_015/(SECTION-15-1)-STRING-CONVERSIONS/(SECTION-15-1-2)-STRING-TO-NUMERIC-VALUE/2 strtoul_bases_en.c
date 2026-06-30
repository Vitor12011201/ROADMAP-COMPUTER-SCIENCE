#include <stdio.h>
#include <stdlib.h>

/* OBJECTIVE: Use 'strtoul' to decode text strings that represent
   numbers in different bases (Binary and Hexadecimal), simulating raw data reading. */

int main() {
    char *binary_payload = "101010"; // 42 in binary
    char *hex_payload = "2A";         // 42 in hexadecimal

    // Converting base 2 (Binary). The second argument NULL indicates we will ignore errors for now.
    unsigned long bin_to_num = strtoul(binary_payload, NULL, 2);

    // Converting base 16 (Hexadecimal).
    unsigned long hex_to_num = strtoul(hex_payload, NULL, 16);

    printf("--- Base Decoder ---\n");
    printf("String \"101010\" in base 2  = %lu in decimal\n", bin_to_num);
    printf("String \"2A\"     in base 16 = %lu in decimal\n", hex_to_num);

    return 0;
}