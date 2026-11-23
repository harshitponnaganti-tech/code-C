#include <stdio.h>

static int can_assign(const long long *books, int n, int students, long long max_pages) {
    int used_students = 1;
    long long current_pages = 0;

    for (int i = 0; i < n; i++) {
        if (books[i] > max_pages) {
            return 0;
        }
        if (current_pages + books[i] <= max_pages) {
            current_pages += books[i];
        } else {
            used_students++;
            current_pages = books[i];
            if (used_students > students) {
                return 0;
            }
        }
    }
    return 1;
}

int main(void) {
    int t;
    if (scanf("%d", &t) != 1) {
        return 0;
    }

    while (t--) {
        int n, a;
        scanf("%d %d", &n, &a);

        long long books[n];
        long long low = 0, high = 0;

        for (int i = 0; i < n; i++) {
            scanf("%lld", &books[i]);
            if (books[i] > low) {
                low = books[i];
            }
            high += books[i];
        }

        long long ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (can_assign(books, n, a, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
