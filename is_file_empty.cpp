#include <stdio.h>

int is_file_empty(const char *filename)
{
    FILE *test_file = fopen(filename, "r");
    int number_of_symbols = 0;

    while (fgetc(test_file) != EOF)
    {
        number_of_symbols++;
    }
    if (number_of_symbols == 0)
    {
        fclose(test_file);
        return 0;
    }

    fclose(test_file);
    return 1;
}
