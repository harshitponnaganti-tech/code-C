#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int na, nb, nc;
        scanf("%d %d %d", &na, &nb, &nc);
        
        // Check if any army is dominant over the other two combined
        if (na > nb + nc || nb > na + nc || nc > na + nb) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
