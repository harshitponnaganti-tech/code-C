#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a1, a2, b1, b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        
        // Net export of country A = a1 - a2
        // Net export of country B = b1 - b2
        // Since the three countries trade only among themselves, 
        // the sum of net exports of A, B, and C must equal 0.
        // Therefore, Net Export of C = -(Net Export of A + Net Export of B)
        // Country C is in trade surplus if its net export is strictly greater than 0.
        
        int net_a = a1 - a2;
        int net_b = b1 - b2;
        
        if (net_a + net_b < 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
