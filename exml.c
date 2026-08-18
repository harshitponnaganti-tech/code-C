#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int bestCar = 1;
        int bestSpeed = 0;

        for (int i = 1; i <= N; i++) {
            int d, t;
            scanf("%d %d", &d, &t);

            int speed = d / t;

            if (speed > bestSpeed) {
                bestSpeed = speed;
                bestCar = i;
            }
        }

        printf("%d\n", bestCar);
    }

    return 0;
}
