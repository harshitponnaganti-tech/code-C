#include <stdio.h>

int main() {
    int A, B, P, E;
    // Read the four space-separated integers
    if (scanf("%d %d %d %d", &A, &B, &P, &E) == 4) {
        // Calculate total XP: (XP from solving problems) + (XP from writing editorials)
        int total_xp = (A * P) + (B * E);
        // Print the result
        printf("%d\n", total_xp);
    }
    return 0;
}
