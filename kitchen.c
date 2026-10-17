```c
#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &X, &Y);
        printf("%d\n", Y - X);
    }

    return 0;
}
```
