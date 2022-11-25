#include "main.h"

/**
 * print_c - prints character
 * @ap: list
 * Return: number of parameters
 */
int print_c(va_list ap)
{
	int c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * print_s - print string
 * @ap: list
 * Return: num of parameters
 */
int print_s(va_list ap)
{
	char *str;
	int i, count = 0;

	str = va_arg(ap, char *);

	for (i = 0; i < str[i]; i++)
		count += _putchar(str[i]);
	return (count);
}

/**
 * print_percent - print %
 * @ap: list
 * Return: num of parameter
 */
int print_percent(__attribute__((unused))va_list ap)
{
	return (putchar('%'));
}
