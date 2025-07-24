#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("File.txt", "r");

    if (file == NULL) {
        printf("Error: %s\n", strerror(errno)); // strerror - string error
        // return 1;
        exit(1);
    }

    fclose(file);

    return 0;
}