#include <stdio.h>

// This chapter discusses platform differences, compilers, WSL, Xcode, etc.
// So I created a system that identifies which operating system is being used by the user.

int main(void) {
    printf("Hello, world! \n");

#if defined(_WIN32)
    printf("You are using Windows\n");
#elif defined(__linux__)
    printf("You are using Linux\n");
#elif defined(__APPLE__)
    printf("You are using MacOS\n");
#else
    printf("Unknown Operating System\n");
#endif

    return 0;
}