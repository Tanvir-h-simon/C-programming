#include <stdio.h>
#include <string.h>

int is_palindrome(char str[1000]) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    char S[1000];
    scanf("%s", S);
    // fgets(S, sizeof(S), stdin);
    if (is_palindrome(S) == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}