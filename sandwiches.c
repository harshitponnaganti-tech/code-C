
#include <stdio.h>

int main() {
    int B, H, C;
    scanf("%d %d %d", &B, &H, &C);

    int bread = B / 2;
    int fillings = H + C;

    if (bread < fillings)
        printf("%d\n", bread);
    else
        printf("%d\n", fillings);

    return 0;
}

