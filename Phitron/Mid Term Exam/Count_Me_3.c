#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);

    // char S[10000];
    // scanf("%s", S);

    // int count_capital, count_small, count_digit;

    // for (int i = 0; S[i] != '\0'; i++) {
    //     if (S[i] >= 'A' && S[i] <= 'Z') {
    //         count_capital[T]++;
    //     } else if (S[i] >= 'a' && S[i] <= 'z') {
    //         count_small[T]++;
    //     } else {
    //         count_digit[T]++;
    //     }
    // }

    // printf("%d %d %d\n", count_capital, count_small, count_digit);

    for (int i = 0; i < T; i++) {
        char S[10001]; 
        scanf("%s", S);


        int count_capital = 0, count_small = 0, count_digit = 0;

  
        for (int j = 0; S[j] != '\0'; j++) {
            if (S[j] >= 'A' && S[j] <= 'Z') {
                count_capital++;
            } 
            else if (S[j] >= 'a' && S[j] <= 'z') {
                count_small++;
            } 
            else if (S[j] >= '0' && S[j] <= '9') {
                count_digit++;
            }
        }
        printf("%d %d %d\n", count_capital, count_small, count_digit);
    }

    return 0;
}