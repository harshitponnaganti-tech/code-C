#include <stdio.h>

int main() {
    int H;
    scanf("%d", &H);

    if (H < 8)
        printf("LESS");
    else if (H == 8)
        printf("PERFECT");
    else
        printf("MORE");

    return 0;
}
