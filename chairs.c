#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); // Read students (X) and chairs (Y)
        
        // If students are more than chairs, buy the difference. Otherwise, buy 0.
        if (X > Y) {
            printf("%d\n", X - Y);
        } else {
            printf("%d\n", 0);
        }
    }
    
    return 0;
}
