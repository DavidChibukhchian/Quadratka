#ifndef TEST_H
#define TEST_H

#include "QUADRATIC_Library.h"

/**
 * This function tests function "quadratic_equation_solver"
 * @param a - coefficient of х^2;
 * @param b - coefficient of х^1;
 * @param c - coefficient of х^0;
 * @param nRoots_right - right number of roots of quadratic equation;
 * @param x1_right - right value of the first or the only root of quadratic equation;
 * @param x2_right - right value of the second root of quadratic equation;
 * @param number_of_test - number of held test;
 */
int test(double a, double b, double c, NumberOfRoots nRoots_right, double x1_right, double x2_right, int number_of_test);

/**
 * This function tests function "quadratic_equation_solver" getting coefficnients and answers from a file
 */
void test_from_file();

/**
 * This function runs function "test" several times
 */
void test_all();

#endif //TEST_H