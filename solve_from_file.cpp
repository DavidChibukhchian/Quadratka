#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "FILES.h"
#include "QUADRATIC_Library.h"

void solve_from_file()
{
    int number_of_lines = 0;
    int ch = 0, check = 0;
    int return_fscanf = 0;

    FILE *test_file = fopen("..\\ToSolve.txt", "r");
    if (test_file == NULL)
    {
        printf("UNABLE TO OPEN FILE");
    }
    else
    {
        check = is_file_empty("..\\ToSolve.txt");
        if (check)
        {
            while ((ch = fgetc(test_file)) != EOF)
            {
                if (ch == '\n')
                {
                    number_of_lines++;
                }
            }
            rewind(test_file);

            for (int i = 0; i <= number_of_lines; i++)
            {
                double a = -1, b = -1, c = -1, x1 = -1, x2 = -1;
                char perenos = 0;

                return_fscanf = fscanf(test_file, "%lg%lg%lg%c", &a, &b, &c, &perenos);

                assert(isfinite(a) && "a must be finite");
                assert(isfinite(b) && "b must be finite");
                assert(isfinite(c) && "c must be finite");

                if (i < number_of_lines)
                {
                    if ((return_fscanf == 4) && (perenos = '\n'))
                    {
                        NumberOfRoots nRoots = solve_quadratic_equation(a, b, c, &x1, &x2);

                        output_roots(nRoots, a, b, c, x1, x2);
                    } else
                    {
                        printf("You had to enter in each line coefficients, "
                               "a right number of roots and roots separated by space\n");
                    }
                }
                else
                {
                    if ((return_fscanf == 3) && (perenos = EOF))
                    {
                        NumberOfRoots nRoots = solve_quadratic_equation(a, b, c, &x1, &x2);
                        output_roots(nRoots, a, b, c, x1, x2);
                    }
                    else
                    {
                        printf("TEST_%d: You had to enter in each line coefficients,\n"
                               "        a right number of roots and roots separated by space\n", i + 1);
                    }
                }
            }
        }
        else
        {
            printf("\nSOLVE FILE IS EMPTY\nPlease enter in each line coefficients,\n"
                   "a right number of roots and roots separated by space\n");
        }
        fclose(test_file);
    }
}