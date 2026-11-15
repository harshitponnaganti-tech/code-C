#include <stdio.h>

int main() {
    int R, B;
    if (scanf("%d %d", &R, &B) == 2) {
        // Check if the required runs can be achieved at a maximum of 6 runs per ball
        if (R <= B * 6) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
