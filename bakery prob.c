include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int cost1 = N * 100;
    int cost2 = K + N * 60;

    if (cost1 < cost2)
        printf("%d\n", cost1);
    else
        printf("%d\n", cost2);

    return 0;
}

