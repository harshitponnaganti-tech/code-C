#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int eaten = 0;
        while (a != b) {
            if (a > b) {
                int half = (a + 1) / 2; // ceil(a / 2)
                eaten += half;
                a -= half;
            } else {
                int half = (b + 1) / 2; // ceil(b / 2)
                eaten += half;
                b -= half;
            }
        }

        printf("%d\n", eaten);
    }

    return 0;
}
