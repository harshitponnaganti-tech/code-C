#include <stdio.h>

void solve() {
    long long n;
    scanf("%lld", &n);
    
    int count = 0;
    if (n == 0) {
        printf("0\n");
        return;
    }
    
    while (n > 0) {
        if (n % 10 == 4) {
            count++;
        }
        n /= 10;
    }
    
    printf("%d\n", count);
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}
