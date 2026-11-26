#include <stdio.h>
#include <stdlib.h>

int cmp_int(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) {
        return 0;
    }

    while (T--) {
        int N;
        scanf("%d", &N);

        int *A = (int *)malloc((size_t)N * sizeof(int));
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        qsort(A, (size_t)N, sizeof(int), cmp_int);

        // Option 1: change smallest element A[0] -> new range is A[N-1] - A[1]
        int diff_drop_min = A[N - 1] - A[1];
        // Option 2: change largest element A[N-1] -> new range is A[N-2] - A[0]
        int diff_drop_max = A[N - 2] - A[0];

        int ans = diff_drop_min < diff_drop_max ? diff_drop_min : diff_drop_max;
        printf("%d\n", ans);

        free(A);
    }

    return 0;
}
