#include <stdio.h>

int main(void) {
    int R1, R2;
    int D1, D2;
    
    // Read initial ratings
    scanf("%d %d", &R1, &R2);
    
    // Read rating changes
    scanf("%d %d", &D1, &D2);
    
    // Calculate final ratings
    int final_dominater = R1 + D1;
    int final_everule = R2 + D2;
    
    // Compare and print the result
    if (final_dominater > final_everule) {
        printf("Dominater\n");
    } else {
        printf("Everule\n");
    }
    
    return 0;
}
