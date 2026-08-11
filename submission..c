#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X;
        scanf("%d", &X);

        // Since 1 minute has 60 seconds and submissions are every 30 seconds,
        // a participant can make 2 submissions per minute.
        printf("%d\n", 2 * X);
    }

    return 0;
}
