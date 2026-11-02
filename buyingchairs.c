#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long w, p, k;
        scanf("%lld %lld %lld", &w, &p, &k);
        
        // We want to maximize stylishness by prioritizing wooden chairs (stylishness = 2)
        // as much as possible, up to the number of available wooden chairs (w) 
        // and the total chairs needed (k).
        long long take_wooden = (k < w) ? k : w;
        long long take_plastic = k - take_wooden;
        
        long long max_stylishness = (take_wooden * 2) + (take_plastic * 1);
        printf("%lld\n", max_stylishness);
    }
    
    return 0;
}
