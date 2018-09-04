#include "insertion_sort.h"

void insertion_sort_int_array(int *arr, size_t s) {

    for (size_t i = 0; i < s - 1; i++) {
        if (arr[i] > arr[i + 1]) {
           for (int j = i; j >= 0; j--) {
               if (arr[j] >= arr[j + 1]) {
                    int swap = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = swap;
                }
            }
        }
    }
}
