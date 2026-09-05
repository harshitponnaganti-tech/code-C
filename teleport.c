#include <stdio.h>

int main() {
    int D, T;
    scanf("%d %d", &D, &T);

    if (T >= D)
        printf("0\n");
    else
        printf("%d\n", D - T);

    return 0;
}
