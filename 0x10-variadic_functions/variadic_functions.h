#ifndef VAR_FUNC_H
#define VAR_FUNC_H

/**
 * Header file with prototype functions for 0x10-v directory.
 */
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
