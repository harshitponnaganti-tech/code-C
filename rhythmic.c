#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
    
    int open_count = 0;
    int current_streak = 0;
    char last_char = '\0';
    
    for (int i = 0; i < n; i++) {
        if (s[i] == last_char) {
            current_streak++;
        } else {
            last_char = s[i];
            current_streak = 1;
        }
        
        if (current_streak == 3) {
            open_count++;
            current_streak = 0;
            last_char = '\0'; // Reset streak and last character
        }
    }
    
    printf("%d\n", open_count);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
