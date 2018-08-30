#include "bubblesort.h"

#include <stdlib.h>

int main(int argc, char *argv[]) {

    int arr[] = {10, 3, 8, 2, 9, 1, 7, 5, 13};
    size_t size = 9;

    bubblesort_int_array(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}