#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int lucky = 0, unlucky = 0;

    for (int i = 0; i < N; i++) {
        int weapons;
        scanf("%d", &weapons);

        if (weapons % 2 == 0)
            lucky++;
        else
            unlucky++;
    }

    if (lucky > unlucky)
        printf("READY FOR BATTLE\n");
    else
        printf("NOT READY\n");

    return 0;
}
