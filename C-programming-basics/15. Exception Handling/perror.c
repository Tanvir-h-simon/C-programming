#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr = fopen("File.txt", "r");

    // if (fptr == NULL) {
    //     printf("Error to opening file.\n");
    //     return 1;
    // }

    if (fptr == NULL) {
        perror("Error"); // perror - print error
        // return 1;
        // exit(1);
        exit(EXIT_FAILURE);
    }

    fclose(fptr);

    // return 0;
    // exit(0);
    exit(EXIT_SUCCESS);
}