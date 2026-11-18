#include <stdio.h>

// Function to sort the array in ascending order using simple bubble sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int c[105];
    for (int i = 0; i < n; i++) {
        scanf("%d", &c[i]);
    }
    
    // Sort the prices in ascending order
    sortArray(c, n);
    
    // Sum the K most expensive items (from the end of the sorted array)
    long long total_price = 0;
    for (int i = n - 1; i >= n - k; i--) {
        total_price += c[i];
    }
    
    printf("%lld\n", total_price);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
