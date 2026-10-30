#include <stdio.h>

int main() {
    int X, N, M;
    scanf("%d %d %d", &X, &N, &M);
    
    // Check if Om's money plus the Gymkhana fund is at least the price of the laptop
    if (X + M >= N) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
