#include <stdio.h>

int main() {
int A, B;
scanf("%d %d", &A, &B);

```
int cost1 = 3 * A;
int cost2 = A + B;

if (cost1 < cost2)
    printf("%d\n", cost1);
else
    printf("%d\n", cost2);

return 0;
```

}
