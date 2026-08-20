#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    if (A == 0) {
        printf("https://www.codechef.com/practice\n");
    }
    else if (B == 0) {
        printf("https://www.codechef.com/contests\n");
    }
    else {
        printf("https://discuss.codechef.com\n");
    }

    return 0;
}
