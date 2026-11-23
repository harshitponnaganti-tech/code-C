#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007LL

static int cmp_int(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

static int lower_bound(const int *arr, int len, int target) {
    int lo = 0, hi = len;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] < target) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}

static void bit_add(int *bit, int max_idx, int idx, int val) {
    for (; idx <= max_idx; idx += idx & -idx) {
        bit[idx] += val;
    }
}

static int bit_query(const int *bit, int idx) {
    int sum = 0;
    for (; idx > 0; idx -= idx & -idx) {
        sum += bit[idx];
    }
    return sum;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int *A = (int *)malloc((size_t)N * sizeof(int));
    int *sorted = (int *)malloc((size_t)N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        sorted[i] = A[i];
    }

    qsort(sorted, (size_t)N, sizeof(int), cmp_int);
    int uniq = 0;
    for (int i = 0; i < N; i++) {
        if (i == 0 || sorted[i] != sorted[i - 1]) {
            sorted[uniq++] = sorted[i];
        }
    }

    int *comp = (int *)malloc((size_t)N * sizeof(int));
    for (int i = 0; i < N; i++) {
        comp[i] = lower_bound(sorted, uniq, A[i]);
    }
    free(A);
    free(sorted);

    int *freq = (int *)calloc((size_t)uniq, sizeof(int));
    int *L = (int *)malloc((size_t)N * sizeof(int));
    int distinct = 0;
    for (int i = 0; i < N; i++) {
        int c = comp[i];
        if (freq[c] == 0) distinct++;
        freq[c]++;
        int P = freq[c];
        int D = distinct;
        L[i] = P - (D / 2);
    }

    for (int i = 0; i < uniq; i++) freq[i] = 0;
    distinct = 0;

    int *R = (int *)malloc((size_t)N * sizeof(int));
    for (int j = N - 1; j >= 0; j--) {
        int c = comp[j];
        if (freq[c] == 0) distinct++;
        freq[c]++;
        int S = freq[c];
        int E = distinct;
        R[j] = (E / 2) - S;
    }

    free(freq);
    free(comp);

    /* Shift range [-N, N] to [1, 2*N + 1] for 1-indexed BIT */
    int offset = N + 1;
    int max_bit = 2 * N + 2;
    int *bit = (int *)calloc((size_t)(max_bit + 1), sizeof(int));

    for (int j = 0; j < N; j++) {
        int r_idx = R[j] + offset;
        bit_add(bit, max_bit, r_idx, 1);
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        /* Remove index i from suffix pool so only j > i remain */
        int cur_r_idx = R[i] + offset;
        bit_add(bit, max_bit, cur_r_idx, -1);

        int l_idx = L[i] + offset;
        if (l_idx < 1) l_idx = 1;
        if (l_idx <= max_bit) {
            int total_suffix = bit_query(bit, max_bit);
            int less_than_l = bit_query(bit, l_idx - 1);
            int valid_j = total_suffix - less_than_l;
            ans = (ans + (long long)valid_j) % MOD;
        }
    }

    printf("%lld\n", ans);

    free(L);
    free(R);
    free(bit);
    return 0;
}
