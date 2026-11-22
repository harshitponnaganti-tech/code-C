#include <stdio.h>

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n;
        scanf("%d", &n);

        int freq[105] = {0}; // Constraints state 1 <= N <= 100
        for (int i = 0; i < n; i++) {
            int color;
            scanf("%d", &color);
            if (color >= 1 && color <= n) {
                freq[color]++;
            }
        }

        int best_color = 1;
        int max_freq = 0;

        for (int c = 1; c <= n; c++) {
            if (freq[c] > max_freq) {
                max_freq = freq[c];
                best_color = c;
            }
        }

        printf("%d\n", best_color);
    }

    return 0;
}
