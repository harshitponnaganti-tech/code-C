#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
        // Total available seats across 10 airplanes
        int total_seats = 10 * x;
        
        // Maximum people who can book is the minimum of available seats and willing people
        int passengers = (total_seats < y) ? total_seats : y;
        
        // Total earnings
        int earnings = passengers * z;
        
        printf("%d\n", earnings);
    }
    return 0;
}
