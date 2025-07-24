#include <stdio.h>

int main() {
    FILE *fptr;
    // fptr = fopen("Test.txt", "w");

    // fprintf(fptr, "My name is Tanvir Hossain"); // The old content is deleted, and the new content is inserted 

    // Open a file in append mode
    fptr = fopen("Test.txt", "a"); // "a"- append to the file

    // Append text to the file- The old content not deleted
    fprintf(fptr, "I am Tanvir Hossain.\n");

    fclose(fptr);

    return 0;
}