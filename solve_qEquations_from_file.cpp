#include <stdio.h>
#include "FILES.h"

void solve_qEquations_from_file()
{
    printf("\nOpen ToSolve.txt and enter in each line\n"
           "coefficients separated by space\n"
           "\nEnter 0 to continue\n");
    int continue_button = -1;
    scanf("%d", &continue_button);

    if (continue_button)
    {
        printf("\nYou had to enter 0 to continue\nPlease try again\n");
    }
    else
    {
        solve_from_file();
    }
}