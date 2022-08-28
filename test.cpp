#include <stdio.h>
#include "QUADRATIC_Library.h"

int test(double a, double b, double c, NumberOfRoots nRoots_right, double x1_right, double x2_right, int number_of_test)
{
    double x1_test = 0, x2_test = 0;
    NumberOfRoots nRoots_test = solve_quadratic_equation(a, b, c, &x2_test, &x1_test);

    if (nRoots_test == nRoots_right)
    {
        if ((are_equal(x1_test, x1_right)) && (are_equal(x2_test, x2_right)))
        {
            printf("TEST_%d: COMPLETE\n", number_of_test);
            return 1;
        }
        printf("TEST_%d: NOT COMPLETE\n", number_of_test);
        printf ("        EXPECTED: x1 = %lg, x2 = %lg\n", x1_right, x2_right);
        printf ("        BUT RETURNED: x1 = %lg, x2 = %lg\n", x1_test, x2_test);
        return 0;
    }

    printf("TEST_%d: NOT COMPLETE\n", number_of_test);

    switch(nRoots_right)
    {
        case NO_ROOTS:
            printf("        EXPECTED: NO_ROOTS\n");
            printf("        BUT RETURNED: TWO_ROOTS\n");
            break;

        case ONE_ROOT:
            printf("        EXPECTED: ONE_ROOT\n");
            break;

        case TWO_ROOTS:
            printf("        EXPECTED: TWO_ROOTS\n");
            break;

        case INFINITY_ROOTS:
            printf("        EXPECTED: INFINITY_ROOTs\n");
            break;
    }
    return 0;
}