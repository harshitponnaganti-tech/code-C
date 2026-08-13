#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int B = (int)sqrt(N);

        printf("%d\n", B * B);
    }

    return 0;
}
