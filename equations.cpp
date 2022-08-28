#include <math.h>
#include <assert.h>
#include "QUADRATIC_Library.h"

NumberOfRoots solve_linear_equation(double b, double c, double* address_of_x1)
{
    assert(isfinite        (b)       && "b must be finite");
    assert(isfinite        (c)       && "c must be finite");
    assert(isfinite (*address_of_x1) && "address_of_x1 must me finite");

    if (are_equal(b,0))
    {
        if (are_equal(c, 0))
        {
            return INFINITY_ROOTS;
        }
        return NO_ROOTS;
    }

    if (are_equal(c, 0))
    {
        *address_of_x1 = 0;
        return ONE_ROOT;
    }

    *address_of_x1 = (-c / b);
    return ONE_ROOT;
}

/**
 * This function evaluate discriminant of quadratic equation
 * If discriminant is equal to 0 (eps = 1e-8), evaluate discriminant like 0;
 * @param a - coefficient of х^2;
 * @param b - coefficient of x^1;
 * @param c - coefficient of x^0;
 * @return - returns value of discriminant;
 */
double evaluate_discriminant(double a, double b, double c)
{
    assert( isfinite(a) && "a must be finite");
    assert( isfinite(b) && "b must be finite");
    assert( isfinite(c) && "c must be finite");
    assert(   a != 0    && "a can not be 0");

    double discriminant = (b * b - 4 * a * c);

    if (are_equal(discriminant, 0))
    {
        return 0;
    }
    return discriminant;
}

NumberOfRoots solve_quadratic_equation(double a, double b, double c, double* address_of_x1, double* address_of_x2)
{
    assert(isfinite        (a)       && "a must be finite");
    assert(isfinite        (b)       && "b must be finite");
    assert(isfinite        (c)       && "c must be finite");
    assert(isfinite (*address_of_x1) && "address_of_x1 must be finite");
    assert(isfinite (*address_of_x2) && "address_of_x2 must be finite");

    if (are_equal(a, 0))
    {
        return solve_linear_equation(b, c, address_of_x1);
    }

    double discriminant = evaluate_discriminant(a, b, c);

    if (discriminant < 0)
    {
        return NO_ROOTS;
    }

    if (discriminant == 0)
    {
        if ((-b / (2 * a)) == 0)
        {
            *address_of_x1 = 0;
            return ONE_ROOT;
        }

        *address_of_x1 = -b / (2 * a);
        return ONE_ROOT;
    }

    double sqrt_discriminant = sqrt(discriminant);
    *address_of_x1 = (-b + sqrt_discriminant) / (2 * a);
    *address_of_x2 = (-b - sqrt_discriminant) / (2 * a);

    return TWO_ROOTS;
}
