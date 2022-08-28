#ifndef FILES_H
#define FILES_H

/**
 * This function solves specified number of quadratic equation from a file
 */
void solve_qEquations_from_file();

/**
 * This function solves quadratoc equations getting coefficients from a file
 */
void solve_from_file();

/**
 * This function checks if the file is empty
 * @param filename - name of the file which will be checked
 * @return 0 if the file is empty and 1 if it does not
 */
int is_file_empty(const char *filename);

#endif //FILES_H
