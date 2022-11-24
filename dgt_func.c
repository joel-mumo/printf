#include "main.h"

/**
 * print_d - print decimal
 * @ap: list
 * Return: count number
 */
int print_d(va_list ap)
{
	unsigned int abs_n, aux_n, i, count;
	int dgt;

	count = 0;
	dgt = va_arg(ap, int);

	if (dgt < 0)
	{
		abs_n = (dgt * -1);
		count = _puttchar(45);

	}
	else
		abs_n = dgt;

	aux_n = abs_n;
	i = 1;
	while (aux_n > 9)
	{
		aux_n /= 10;
		i *= 10;
	}
	while (aux_n >= 1)
	{
		count += _putchar(((abs_n / i) % 10) + '0');
		i /= 10;
	}
	return (count);
}

/**
 * print_i - print number
 * @ap: list
 * Return: number count
 */
int print_i(va_list ap)
{
	return (print_d(ap));
}
