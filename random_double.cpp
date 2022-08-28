#include <random>

double random_double()
{
    double a = (rand() - (RAND_MAX/2)) / 100.0;
    return a;
}
