#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int array[N];
    int sum_positive = 0, sum_negative = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        if (array[i] > 0) {
            sum_positive += array[i];
        } else if (array[i] < 0) {
            sum_negative += array[i];
        }
    }
    printf("%d %d\n", sum_positive, sum_negative);
    return 0;
}