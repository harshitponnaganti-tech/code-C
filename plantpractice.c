#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int max_height = 0;
    for (int i = 0; i < n - 1; i++) {
        int current_height = (a[i] < a[i+1]) ? a[i] : a[i+1];
        if (current_height > max_height) {
            max_height = current_height;
        }
    }
    
    printf("%d\n", max_height);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
