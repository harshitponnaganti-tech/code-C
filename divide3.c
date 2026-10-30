#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    // If N is perfectly divisible by 3, imbalance is 0. Otherwise, it is 1.
    if (n % 3 == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    
    return 0;
}
