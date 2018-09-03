#include "test_bubblesort.h"

#include <CUnit/Basic.h>
#include <stddef.h>

#include "../bubblesort.h"

static int init_suite() { return 0; }
static int clean_suite() { return 0; }

void test_bubblesort_unsorted_array_1() {

    int arr[] = {5, 2, 1, 8, 9};
    int exp[] = {1, 2, 5, 8, 9};
    size_t n = 5;

    bubblesort_int_array(arr, n);

    for (size_t i = 0; i < n; i++) {
        CU_ASSERT_EQUAL(arr[i], exp[i]);
    }
}

void test_bubblesort_unsorted_array_2() {

    int arr[] = {3, 2, 9, 10, 6, 234, 29, 96, 12};
    int exp[] = {2, 3, 6, 9, 10, 12, 29, 96, 234};
    size_t n = 9;

    bubblesort_int_array(arr, n);

    for (size_t i = 0; i < n; i++) {
        CU_ASSERT_EQUAL(arr[i], exp[i]);
    }
}

void test_bubblesort_sorted_array() {
    int arr[] = {1, 2, 3, 4, 5};
    int exp[] = {1, 2, 3, 4, 5};
    size_t n = 5;

    bubblesort_int_array(arr, n);

    for (size_t i = 0; i < n; i++) {
        CU_ASSERT_EQUAL(arr[i], exp[i]);
    }
}

void test_bubblesort() {

    if (CU_initialize_registry() != CUE_SUCCESS) return;

    CU_pSuite pSuite = CU_add_suite("Bubblesort", init_suite, clean_suite);
    if (pSuite == NULL) {
        CU_cleanup_registry();
    }

    if ((CU_add_test(pSuite, "Bubblesort test on unsorted array #1", test_bubblesort_unsorted_array_1) == NULL) ||
        (CU_add_test(pSuite, "Bubblesort test on unsorted array #2", test_bubblesort_unsorted_array_2) == NULL) ||
        (CU_add_test(pSuite, "Bubblesort test on sorted array", test_bubblesort_sorted_array) == NULL)) {
        CU_cleanup_registry();
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}
