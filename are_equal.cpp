#include <math.h>
#include <assert.h>**

int are_equal(double a1, double a2)
{
    assert(isfinite(a1) && "a1 must be finite");
    assert(isfinite(a2) && "a2 must be finite");

    const double eps = 1e-8;
    return (abs(a1-a2) < eps);
}