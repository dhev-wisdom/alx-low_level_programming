#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct p - checker struct
 * @p: possibilty
 * @f: checker to be used
 */

typedef struct p
{
	char *p;
	void (*f)(var_list);
} checker;

void print_c(var_list);
void print_i(var_list);
void print_f(var_list);
void print_s(var_list);

#endif
