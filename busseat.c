#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        // Lower Deck: 1 to 15
        if (N <= 15) {
            // Double seats are from 1 to 10, Single seats are from 11 to 15
            if (N >= 1 && N <= 10) {
                printf("Lower Double\n");
            } else {
                printf("Lower Single\n");
            }
        } 
        // Upper Deck: 16 to 30
        else {
            // Double seats are from 16 to 25, Single seats are from 26 to 30
            if (N >= 16 && N <= 25) {
                printf("Upper Double\n");
            } else {
                printf("Upper Single\n");
            }
        }
    }
    
    return 0;
}
