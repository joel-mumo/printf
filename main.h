#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdarg.h>

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
#endif/*MAIN_H*/
