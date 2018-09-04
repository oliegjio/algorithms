#include "bubblesort.h"

void bubblesort_int_array(int *arr, size_t n) {
    
    int swap;

    for (size_t i = n - 1; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
}
