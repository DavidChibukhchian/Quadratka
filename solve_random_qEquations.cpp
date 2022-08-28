#include <stdio.h>
#include "QUADRATIC_Library.h"

void solve_random_qEquations()
{
    int number_of_random_tests = 0;
    printf("\nHow many random quadratic equations do you want to solve?\n");
    scanf("%d", &number_of_random_tests);
    printf("\n");

    for (int i = 1; i <= number_of_random_tests; i++)
    {
        solve_random_equation(i);
    }
}