#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    int max_score = -1;
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        
        if (a > max_score) {
            printf("1 ");
            max_score = a;
        } else {
            printf("0 ");
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
