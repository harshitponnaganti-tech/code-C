#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        int count = 0;
        for (int i = 0; i < N; i++) {
            int age;
            scanf("%d", &age);
            if (age >= X) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
