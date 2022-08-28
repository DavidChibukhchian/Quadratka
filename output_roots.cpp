#include <stdio.h>
#include <assert.h>
#include <math.h>*
#include "QUADRATIC_Library.h"

void output_roots(NumberOfRoots nRoots, double a, double b, double c, double x1, double x2)
{
    assert( isfinite(a)  && "a must be finite");
    assert( isfinite(b)  && "b must be finite");
    assert( isfinite(c)  && "c must be finite");
    assert( isfinite(x1) && "x1 must be finite");
    assert( isfinite(x2) && "x2 must be finite");

    switch (nRoots)
    {
        case NO_ROOTS:
            printf("\n(%lg)x^2 + (%lg)x + (%lg) = 0", a, b, c);
            printf("\nNo solutions\n\n");
            break;

        case ONE_ROOT:
            printf("\n(%lg)x^2 + (%lg)x + (%lg) = 0", a, b, c);
            printf ("\nx = %lg\n\n", x1);
            break;

        case TWO_ROOTS:
            printf("\n(%lg)x^2 + (%lg)x + (%lg) = 0", a, b, c);
            printf ("\nx1 = %lg\nx2 = %lg\n\n", x1, x2);
            break;

        case INFINITY_ROOTS:
            printf("\n(%lg)x^2 + (%lg)x + (%lg) = 0", a, b, c);
            printf("\nAny number\n\n");
            break;
    }
}