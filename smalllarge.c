#include <stdlib.h>

int* findMinMax(int n, int* arr) {
    // Allocate memory for an array of 2 integers: [min, max]
    int* result = (int*)malloc(2 * sizeof(int));
    
    // Initialize min and max with the first element
    result[0] = arr[0]; // min
    result[1] = arr[0]; // max
    
    // Loop through the rest of the array to find min and max
    for (int i = 1; i < n; i++) {
        if (arr[i] < result[0]) {
            result[0] = arr[i];
        }
        if (arr[i] > result[1]) {
            result[1] = arr[i];
        }
    }
    
    return result;
}
