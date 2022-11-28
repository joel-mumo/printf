#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct op - struct op
 *
 * @spec: specifier
 * @f: function associated
 */
typedef struct op
{
	char *spec;
	int (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(char s))(va_list);
int print_c(va_list ap);
int print_s(va_list ap);
int print_d(va_list ap);
int print_i(va_list ap);
int print_percent(va_list ap);

#endif/*MAIN_H*/
