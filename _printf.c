#include "main.h"
#include <stdarg.h>
#include <stdlib.h>


/**
 * _printf - creates printf function
 * @format: an array of pointers
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0, i;
		int (*x)(va_list);
		va_list ap;

		va_start(ap, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format[i] != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i += 2;
				}
				else
				{
					x = get_func(format[i + 1]);
					if (x)
						count += x(ap);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				count += _putchar(format[i]);
				i++;
			}
		}
		va_end(ap);
		return (count);
	} return (-1);
}
