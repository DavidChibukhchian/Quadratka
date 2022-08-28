#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "TEST.h"
#include "FILES.h"
#include "QUADRATIC_Library.h"

void test_from_file()
{
    int number_of_lines = 0, k = 0;
    int ch = 0, check_empty = 0;
    int return_fscanf = 0;

    printf("\n");

    FILE *test_file = fopen("..\\ToTest.txt", "r");
    if (test_file == NULL)
    {
        printf("UNABLE TO OPEN FILE");
    }
    else
    {
        check_empty = is_file_empty("..\\ToTest.txt");
        if (check_empty) {
            while ((ch = fgetc(test_file)) != EOF) {
                if (ch == '\n') {
                    number_of_lines++;
                }
            }
            rewind(test_file);

            for (int i = 0; i <= number_of_lines; i++)
            {
                double a = -1, b = -1, c = -1, x1_right = -1, x2_right = -1;
                NumberOfRoots nRoots_right;
                int double_nRoots_right = -1;
                char perenos = 0;
                return_fscanf = fscanf(test_file, "%lg%lg%lg%d%lg%lg%c", &a, &b, &c, \
                &double_nRoots_right, &x1_right, &x2_right, &perenos);

                assert(isfinite(a) && "a must be finite");
                assert(isfinite(b) && "b must be finite");
                assert(isfinite(c) && "c must be finite");
                assert(isfinite(double_nRoots_right) && "A right number of roots must be finite");
                assert(isfinite(x1_right) && "x1 must be finite");
                assert(isfinite(x2_right) && "x2 must be finite");

                if (i < number_of_lines)
                {
                    if ((return_fscanf == 7) && (perenos = '\n'))
                    {
                        switch (double_nRoots_right) {
                            case 0:
                                nRoots_right = NO_ROOTS;
                                break;

                            case 1:
                                nRoots_right = ONE_ROOT;
                                break;

                            case 2:
                                nRoots_right = TWO_ROOTS;
                                break;

                            case 3:
                                nRoots_right = INFINITY_ROOTS;
                                break;
                        }
                        k += test(a, b, c, nRoots_right, x1_right, x2_right, i + 1);
                    }
                    else
                    {
                        printf("You had to enter in each line coefficients, "
                               "a right number of roots and roots separated by space\n");
                    }
                }
                else
                {
                    if ((return_fscanf == 6) && (perenos = EOF))
                    {
                        switch (double_nRoots_right)
                        {
                            case 0:
                                nRoots_right = NO_ROOTS;
                                break;

                            case 1:
                                nRoots_right = ONE_ROOT;
                                break;

                            case 2:
                                nRoots_right = TWO_ROOTS;
                                break;

                            case 3:
                                nRoots_right = INFINITY_ROOTS;
                                break;
                        }
                        k += test(a, b, c, nRoots_right, x1_right, x2_right, i + 1);
                    }
                    else
                    {
                        printf("TEST_%d: You had to enter in each line coefficients,\n"
                               "        a right number of roots and roots separated by space\n", i + 1);
                    }
                }
            }
            printf("\n%d/%d tests are complete\n", k, number_of_lines + 1);
        }
        else
        {
            printf("\nTEST FILE IS EMPTY\nPlease enter in each line coefficients,\n"
                   "a right number of roots and roots separated by space\n");
        }

    fclose(test_file);
    }
}