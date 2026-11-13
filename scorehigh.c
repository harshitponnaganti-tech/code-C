#include <stdio.h>

// Function to find the maximum of four numbers
int max(int a, int b, int c, int d) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    return m;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        
        int na, nb, nc, nd;
        scanf("%d %d %d %d", &na, &nb, &nc, &nd);
        
        // The maximum guaranteed marks is the maximum count among all options
        int ans = max(na, nb, nc, nd);
        printf("%d\n", ans);
    }
    return 0;
}
