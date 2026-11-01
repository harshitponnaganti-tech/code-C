#include <stdio.h>

int main() {
    int r, c, w;
    // Read the rows, columns, and power usage per lamp
    if (scanf("%d %d %d", &r, &c, &w) == 3) {
        // Total power = total number of lamps (r * c) * power per lamp (w)
        int total_power = r * c * w;
        printf("%d\n", total_power);
    }
    return 0;
}
