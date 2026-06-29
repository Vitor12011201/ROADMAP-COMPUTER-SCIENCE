/* Objective: Combine multiple unsigned char integers into a single well-formatted string, simulating the assembly of a network address.
Instructions:
1. Declare four unsigned char variables representing the octets of an IP (e.g., n1 = 192, n2 = 168, n3 = 1, n4 = 15).
2. Create a char array ip_text[16]; (exact size for the largest possible IP "255.255.255.255" + \0).
3. Use snprintf to join these four numbers separated by dots into ip_text.
4. Print the final string. */

#include <stdio.h>

int main()
{

    char ip_text[16];
    unsigned char n1 = 192;
    unsigned char n2 = 168;
    unsigned char n3 = 1;
    unsigned char n4 = 15;

    snprintf(ip_text, 16, "%d.%d.%d.%d", n1, n2, n3, n4);

    printf("%s\n", ip_text);

    return 0;

}