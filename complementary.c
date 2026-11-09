#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int n;
        scanf("%d", &n);
        char s[105];
        scanf("%s", s);
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                printf("T");
            } else if (s[i] == 'T') {
                printf("A");
            } else if (s[i] == 'C') {
                printf("G");
            } else if (s[i] == 'G') {
                printf("C");
            }
        }
        printf("\n");
    }
    
    return 0;
}
