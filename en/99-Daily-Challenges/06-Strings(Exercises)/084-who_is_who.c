/* Goal: Differentiate the pointer from the content using what we learned about sizeof.
1. Declare char *ptr = "Programming";
2. Declare char arr[] = "Programming";
3. Print sizeof(ptr) and sizeof(arr).
4. Use a while or for loop to count how many characters exist in arr until reaching \0.
Tip: while (arr[i] != '\0') { ... }
5. Compare the number of letters you counted with the value of sizeof(arr). Why is sizeof always 1 number higher?
Answer: Because when we measure the Array with sizeof, it counts all the characters in the word "Programming" (11 characters) + the null terminator (\0), thus resulting in 12 characters or Bytes. */

#include <stdio.h>

int main() {

    char *ptr = "Programming";
    char arr[] = "Programming";

    int i = 0;

    printf("This is the character count in Array arr[] until reaching the null terminator:\n");

    while (arr[i] != '\0') {
        i++;
        printf("[%d] ", i);
    }

    printf("\nThis is the size of pointer ptr: [%zu] Bytes\n", sizeof(ptr));
    printf("This is the size of Array arr[]: [%zu] Bytes\n", sizeof(arr));

    return 0;
}