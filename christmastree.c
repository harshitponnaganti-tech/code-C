```c
#include <stdio.h>

int main() {
    int N, A, M, B;
    scanf("%d %d %d %d", &N, &A, &M, &B);

    int profit = (M * B) - (N * A);

    printf("%d\n", profit);

    return 0;
}
```
