#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int total_sum = 0;
        int arr[100];
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            total_sum += arr[i];
        }
        
        int possible = 0;
        // Check if removing any element leaves an even sum
        for (int i = 0; i < N; i++) {
            if ((total_sum - arr[i]) % 2 == 0) {
                possible = 1;
                break;
            }
        }
        
        if (possible) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;
}
