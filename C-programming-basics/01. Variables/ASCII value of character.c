#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // %d will be replaced by the integer value (ASCII value) of the character stored in ch
    printf("The ASCII value of '%c' is %d.\n", ch, ch);

    return 0;
}
