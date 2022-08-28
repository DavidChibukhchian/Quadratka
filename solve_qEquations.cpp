#include <stdio.h>
#include "QUADRATIC_Library.h"

void solve_qEquations()
{
    int number_of_qEquations = 0;
    printf("\nHow many quadratic equations do you want to solve?\n");
    scanf("%d", &number_of_qEquations);

    for (int i = 1; i <= number_of_qEquations; i++)
    {
        printf("\nEnter coefficients a, b, c separated by space\n");
        double a = 0, b = 0, c = 0;
        int k = scanf("%lf %lf %lf", &a, &b, &c);

        if (k == 3)
        {
            double x1 = 0, x2 = 0;
            NumberOfRoots nRoots = solve_quadratic_equation(a, b, c, &x1, &x2);
            output_roots(nRoots, a, b, c, x1, x2);
        }
        else
        {
            printf("\nYou had to enter three real numbers\n");
        }
    }
}