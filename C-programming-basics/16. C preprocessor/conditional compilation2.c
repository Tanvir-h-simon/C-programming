#include <stdio.h>

// #define FEATURE

int main() {

#ifdef FEATURE
    printf("Feature is enabled.\n");
#endif

#ifndef FEATURE
    printf("Feature is NOT enabled.\n");
#endif

    return 0;
}
