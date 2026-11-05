#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    
    char s[n + 1];
    scanf("%s", s);
    
    // Flip each character of the string
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
    
    printf("%s\n", s);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
