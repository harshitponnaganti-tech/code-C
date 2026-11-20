#include <stdio.h>
#include <stdlib.h>

int get_floor(int room) {
    // Rooms 1-10 are on floor 1, 11-20 on floor 2, ..., 10*(i-1)+1 to 10*i on floor i
    return (room - 1) / 10 + 1;
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int x, y;
        if (scanf("%d %d", &x, &y) != 2) {
            break;
        }

        int floor_x = get_floor(x);
        int floor_y = get_floor(y);
        printf("%d\n", abs(floor_x - floor_y));
    }

    return 0;
}
