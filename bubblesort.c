#include "bubblesort.h"

void bubblesort_int_array(int *arr, size_t size) {
    
    int swap;

    for (size_t i = 0; i < size - 1; i++) {

        for (size_t j = 0; j < i -1; i++)
        {
            if (arr[j] < arr[j + 1]) {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
}