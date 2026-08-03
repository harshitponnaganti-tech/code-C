#include <stdio.h>

int main() {
    char S[4];
    scanf("%s", S);

    if (S[0] == S[2] && S[1] == 'w')
        printf("Cute");
    else
        printf("No");

    return 0;
}
