#include <stdio.h>
#include "TEST.h"
#include "QUADRATIC_Library.h"

void test_all()
{
    printf("\n");
    int a = 0;
    a += test( 1, -3,  2,  TWO_ROOTS,       1,  2,  1);
    a += test( 0,  1,  2,  ONE_ROOT,        0, -2,  2);
    a += test( 0,  0,  0,  INFINITY_ROOTS,  0,  0,  3);
    a += test( 1, -4,  3,  NO_ROOTS,        1,  3,  4); // неверное количество корней
    a += test( 1,  1,  1,  NO_ROOTS,        0,  0,  5);
    a += test( 0,  1,  2,  ONE_ROOT,        0, -2,  6);
    a += test( 1, -4,  3,  TWO_ROOTS,       1, 3.5, 7); // неверные корни
    a += test( 1,  0,  0,  ONE_ROOT,        0,  0,  8);
    a += test( 0,  1,  2,  ONE_ROOT,        0, -2,  9);

    printf("\n%d/9 tests are complete\n", a);
}