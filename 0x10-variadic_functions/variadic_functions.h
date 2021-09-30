#ifndef CARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * FILE: VARIADIC_FUNCTION.H
 * Desc: Header file containing prototypes for all
 *           functions used in the 0x10-variadic_functions
 */
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
