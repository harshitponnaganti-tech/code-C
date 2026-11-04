#include <stdio.h>

int main() {
    int T;
    if (scanf("%d", &T) == 1) {
        while (T--) {
            int X, Y;
            scanf("%d %d", &X, &Y);
            
            // Each person requires 2 buckets of Y litres each
            int water_per_person = 2 * Y;
            
            // Maximum number of people who can take a bath
            int max_people = X / water_per_person;
            
            printf("%d\n", max_people);
        }
    }
    return 0;
}
