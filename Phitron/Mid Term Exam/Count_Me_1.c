#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int count_by_2 = 0;
    int count_by_3 = 0;

    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            count_by_2++;
        }
        else if (A[i] % 3 == 0) {
            count_by_3++;
        }
        else if (A[i] % 2 == 0 && A[i] % 3 == 0) {
            count_by_2++;
        }
    }

    printf("%d %d\n", count_by_2, count_by_3);
    return 0;
}