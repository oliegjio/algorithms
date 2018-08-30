#include "test_bubblesort.h"

#include <CUnit/Basic.h>

int init_suite() { return 0; }
int clean_suite() { return 0; }

void test1() {
    CU_ASSERT_EQUAL(0, 2);
}

void test_bubblesort() {

    CU_pSuite pSuite = NULL;

    if (CU_initialize_registry() != CUE_SUCCESS)
      return CU_get_error();

    pSuite = CU_add_suite("Bubblesort", init_suite, clean_suite);
    if (pSuite == NULL) {
        CU_cleanup_registry();
    }

    if (CU_add_test(pSuite, "Bubblesort test", test1) == NULL) {
        CU_cleanup_registry();
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
}