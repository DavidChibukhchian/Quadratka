#include <stdio.h>
#include "TEST.h"
#include "FILES.h"
#include "QUADRATIC_Library.h"

void Menu()
{
    int menu = 0, continue_button = -1;

    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
            solve_qEquations();
            break;

        case 2:
            solve_qEquations_from_file();
            break;

        case 3:
            solve_random_qEquations();
            break;

        case 4:
            test_all();
            break;

        case 5:
            printf("\n" "Open ToTest.txt and enter in each line coefficients,\n"
                        "right number of roots and roots separated by space\n\n"
                        "Enter 0 to continue\n");

            scanf("%d", &continue_button);
            if (continue_button)
            {
                printf("\nPlease try again and enter 0\n");
                break;
            }

            test_from_file();
            break;

        default:
            printf("\nPlease try again and enter 1, 2, 3, 4 or 5\n");
            break;
    }
}
