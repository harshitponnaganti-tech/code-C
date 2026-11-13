#include <stdio.h>

void solve() {
    int A, B, X, Y;
    scanf("%d %d %d %d", &A, &B, &X, &Y);
    
    if (A == B) {
        printf("YES\n");
    } else if (A < B) {
        if (X >= (B - A)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        if (Y >= (A - B)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
