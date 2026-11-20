#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n;
        scanf("%d", &n);

        int count = 0;
        for (int i = 0; i < n; i++) {
            int age;
            scanf("%d", &age);
            if (age >= 10 && age <= 60) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
