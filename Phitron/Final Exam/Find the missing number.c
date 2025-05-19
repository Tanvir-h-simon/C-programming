#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    long long M[T], A[T], B[T], C[T]; // M = Multiplication = A * B * C
    for (int i = 0; i < T; i++) {
        scanf("%lld %lld %lld %lld", &M[i], &A[i], &B[i], &C[i]);
    }

    for (int i = 0; i < T; i++) {
        long long missing_number = M[i] % (A[i] * B[i] * C[i]);
        if (missing_number == 0) {
            printf("%lld", M[i] / (A[i] * B[i] * C[i]));
        } else {
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}