#include <stdio.h>

int main() {
    int X, Y, Z;
    // Read the number of wins (X), draws (Y), and losses (Z)
    if (scanf("%d %d %d", &X, &Y, &Z) == 3) {
        // Calculate current points for your team and the opponent
        float my_points = X * 1.0 + Y * 0.5;
        float opp_points = Z * 1.0 + Y * 0.5;
        
        // Remaining games
        int remaining_games = 4 - (X + Y + Z);
        
        // Maximum points your team can achieve by winning all remaining games
        float max_my_points = my_points + remaining_games;
        
        // Check if your maximum possible points are strictly greater than the opponent's points
        if (max_my_points > opp_points) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
