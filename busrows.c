#include <stdio.h>

int main(void) {
    int T;
    if (scanf("%d", &T) != 1) {
        return 0;
    }

    while (T--) {
        int N, M, X;
        scanf("%d %d %d", &N, &M, &X);

        int row = (X + M - 1) / M;
        int from_front = row;
        int from_back = N - row + 1;

        int ans = from_front < from_back ? from_front : from_back;
        printf("%d\n", ans);
    }

    return 0;
}
