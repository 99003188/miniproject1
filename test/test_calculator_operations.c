  
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include "calculator_operations.h"
#define PROJECT_NAME "calculator"

void test_square(void);
void test_rectangle(void);
void test_cone(void);
void test_cylinder(void);

int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "rectangle", test_rectangle);
  CU_add_test(suite, "cone", test_cone)
  CU_add_test(suite, "cylinder", test_cylinder);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

//-------------------------------------------------------ARITHEMETIC OPERATIONS----------------------------------------------
void test_square(void) {
  CU_ASSERT(9 == square(3));
}

void test_rectangle(void) {
  CU_ASSERT(20 == rectangle(10,2));
}

