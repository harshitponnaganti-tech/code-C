#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n;
        char a[105], b[105];
        scanf("%d", &n);
        scanf("%104s", a);
        scanf("%104s", b);

        int count_a = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 'a') {
                count_a++;
            }
            if (b[i] == 'a') {
                count_a++;
            }
        }

        if (count_a == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
