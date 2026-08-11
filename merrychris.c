#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    // Check conditions based on the greedy approach
    if (X >= 7) {
        printf("3\n");
    } else if (X >= 3) {
        printf("2\n");
    } else {
        printf("1\n");
    }

    return 0;
}
