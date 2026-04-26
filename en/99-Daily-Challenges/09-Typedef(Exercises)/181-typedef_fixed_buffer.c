/* Objective: Simulate a system that requires all messages to have exactly the same size using typedef.
1. Create a 'typedef char DataBlock[16];'.
2. Create a function 'void clear_block(DataBlock b)' that fills all 16 positions of the array with the '*' character.
3. In main, declare two variables of type 'DataBlock' called 'password' and 'token'.
4. Call the 'clear_block' function for both and then print them as strings.
The Challenge: Try to understand why, inside the function, you don't need to use '*b' or 'b[]' to access the elements; the name 'b' already acts as the pointer to the beginning of the block.
*/

#include <stdio.h>

typedef char DataBlock[16];

void clear_block(DataBlock b) {
    for (int i = 0; i < 15; i++) {
        b[i] = '*';
    }

    b[15] = '\0';
}

int main() {
    DataBlock password = "";
    DataBlock token = "";

    clear_block(password);
    clear_block(token);

    printf("Password: %s\n", password);
    printf("Token: %s\n", token);

    return 0;
}