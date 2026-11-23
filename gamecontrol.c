#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r, l;
    if (scanf("%d %d", &r, &l) == 2) {
        printf("%d\n", abs(r - l));
    }
    return 0;
}
