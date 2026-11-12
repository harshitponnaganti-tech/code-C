#include <stdio.h>

// Since the maximum value of any element is 10^6
#define MAX_VAL 1000000

// Using a frequency array to store counts of each number
int count[MAX_VAL + 1] = {0};

int main() {
    int n;
    // Fast I/O
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        count[val]++;
    }

    // Print the sorted elements based on their frequencies
    for (int i = 0; i <= MAX_VAL; i++) {
        while (count[i] > 0) {
            printf("%d\n", i);
            count[i]--;
        }
    }

    return 0;
}
