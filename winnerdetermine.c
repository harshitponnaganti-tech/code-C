#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int pa, pb, qa, qb;
        scanf("%d %d %d %d", &pa, &pb, &qa, &qb);
        
        // Find the maximum (latest) time instant for each participant to solve both problems
        int max_p = (pa > pb) ? pa : pb;
        int max_q = (qa > qb) ? qa : qb;
        
        // Compare the time penalties (lower max time wins)
        if (max_p < max_q) {
            printf("P\n");
        } else if (max_q < max_p) {
            printf("Q\n");
        } else {
            printf("TIE\n");
        }
    }
    return 0;
}
