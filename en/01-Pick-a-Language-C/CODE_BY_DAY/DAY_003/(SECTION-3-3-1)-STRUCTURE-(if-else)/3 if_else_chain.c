#include <stdio.h>

int main() {
    int i = 99;

    if (i == 10) {
        printf("i is 10!\n");
    }
    else if (i == 20) {
        printf("i is 20!\n");
    }
    else if (i == 99) {
        printf("i is 99! My favorite.\n");
        printf("I am very happy.\n");
    }
    else {
        printf("i is some crazy number I've never heard of.\n");
    }

    return 0;
}