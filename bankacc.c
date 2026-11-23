#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        long long a;
        scanf("%lld", &a);

        int sum = 0;
        while (a > 0) {
            sum += (int)(a % 10);
            a /= 10;
        }

        if (sum % 10 == 0) {
            printf("Valid\n");
        } else {
            printf("Invalid\n");
        }
    }

    return 0;
}
