#include <stdio.h>
#include "QUADRATIC_Library.h"

void solve_random_equation(int i)
{
    double x1_random_test = 0, x2_random_test = 0;
    double k1 = random_double();
    double k2 = random_double();
    double k3 = random_double();

    NumberOfRoots nRoots_random_test = solve_quadratic_equation(k1, k2, k3, &x1_random_test, &x2_random_test);
    printf ("Q.EQUATION_%d:", i);
    output_roots(nRoots_random_test, k1, k2, k3, x1_random_test, x2_random_test);
}
