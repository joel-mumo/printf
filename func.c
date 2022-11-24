#include "main.h"
/**
 * print_c - prints character
 * @ap - list
 * Return: number of parameters
 */
int print_c(va_list)
{
	int c;

	int c = va_arg(ap, int);
	return (_putchar(c));
}

/**
 * print_s - print string
 * @ap - list
 * Return: num of parameters
 */
int print_s(va_list)
{
	char *str;
	int i, count;

	str = va_arg(ap, char *);
	count = 0;

	for (i = 0; i < str[i]; i++)
		count += _putchar(str[i]);
	return (count);
}

/**
 * int print_percent - print %
 * @ap - list
 * Return: num of parameter
 */
int print_percent(va_list)
{
	_putchar('%');
}
