#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    // int M1, M2, D; // M1 = Old farmers, M2 = New joined farmers, D = Number of days for old farmers to finish the work 
    // for (int i = 1; i <= T; i++) {
    //     scanf("%d %d %d", &M1, &M2, &D);

    //     int days = D * M1 / (M1 + M2); // Number of days total farmers to finish the work
    //     int fewer_days = D - days;

    //     printf("%d\n", fewer_days);
    // }

    int M1[T], M2[T], D[T]; // M1 = Old farmers, M2 = New joined farmers, D = Number of days for old farmers to finish the work 
    int fewer_days[T]; // Number of days fewer than the old farmers to finish the work

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &M1[i], &M2[i], &D[i]);
    }

    for (int i = 0; i < T; i++) {
        int days = D[i] * M1[i] / (M1[i] + M2[i]); // Number of days total farmers to finish the work
        fewer_days[i] = D[i] - days;
    }

    for (int i = 0; i < T; i++) {
        printf("%d\n", fewer_days[i]);
    }
    return 0;
}