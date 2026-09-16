#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);

    if (Y <= 2 * X)
        printf("METAL\n");
    else
        printf("PLASTIC\n");

    return 0;
}
