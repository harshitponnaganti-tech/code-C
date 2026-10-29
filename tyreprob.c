#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        
        int total_tyres = (n * 2) + (m * 4);
        printf("%d\n", total_tyres);
    }
    
    return 0;
}
