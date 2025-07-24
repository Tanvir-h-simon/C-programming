#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Test.txt", "r"); // "r"- Read from a file

    // if (fptr == NULL) {
    //     printf("File doesn't exist\n");
    // } else {
    //     fclose(fptr);
    //     printf("Successfully read the file.");
    // }

    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("Character = %c\n", ch);

    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    char ch;
    ch = fgetc(fptr);
    while (ch != EOF) { // EOF = end of file
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;
}