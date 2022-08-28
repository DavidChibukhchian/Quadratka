#ifndef QUADRATIC_LIBRARY_H
#define QUADRATIC_LIBRARY_H

enum NumberOfRoots
{
    NO_ROOTS,
    ONE_ROOT,
    TWO_ROOTS,
    INFINITY_ROOTS,
};

/**
 * This function displays main menu
 */
void displayMenu();

/**
 * This function calls main menu
 */
void Menu();

/**
 * This function solves linear equations, saving information about rout count and root value
 * @param b - coefficient of x^1;
 * @param c - coefficient of x^0;
 * @param address_of_x1 - address of root of solved linear equation;
 * @return returns the variable of NumberOfRoots type which means number of roots;
 */
NumberOfRoots solve_linear_equation(double b, double c, double* address_of_x1);

/**
 * This function solves quadratic equations, saving information about root count and root value
 * @param a - coefficient of х^2;
 * @param b - coefficient of х^1;
 * @param c - coefficient of х^0;
 * @param address_of_x1 - address of the first root of quadratic equation, in case when quadratic equation is equal to linear means adress of the only root;
 * @param address_of_x2 - address of the second root of quadratic equation;
 * @return returns the variable of NumberOfRoots type which means root count;
 */
NumberOfRoots solve_quadratic_equation(double a, double b, double c, double* address_of_x1, double* address_of_x2);

/**
 * This function displays quadratic equation and roots
 * @param nRoots - parametr of NumberOfRoots type which means number of roots of quadratic equation;
 * @param a - coefficient of х^2;
 * @param b - coefficient of х^1;
 * @param c - coefficient of х^0;
 * @param x1 - the first root of quadratic equation, in case when quadratic equation is equal to linear means the only root;
 * @param x2 - the second root of quadratic equation;
 */
void output_roots(NumberOfRoots nRoots, double a, double b, double c, double x1, double x2);

/**
 * This function compares two double values
 * @param a1 - the first value;
 * @param a2 - the second value;
 * @return 0 if two values are different (difference is greater than) and 1 if values are equal (difference is less than 1e-8);
 */
int are_equal(double a1, double a2);

/**
 * This function solves random quadratic equations
 * @param number_of_random_quadratic_equation - number of solved random quadratic equation;
 */
void solve_random_equation(int number_of_random_quadratic_equation);

/**
 * This function solves specified number of quadratic equation
 */
void solve_qEquations();

/**
 * This function solves specified number of random quadratic equation
 */
void solve_random_qEquations();

/**
 * This function generates random double number
 * @return random double between -163 and 163;
 */
double random_double();

#endif //QUADRATIC_LIBRARY_H