#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdio.h>
#include <stdarg.h>
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
#endif
