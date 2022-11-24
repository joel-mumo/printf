#include "main.h"
#include <stdarg.h>

/**
 * _printf - creates printf function
 * @format: An array of pointers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i;
	int (*x)(va_list);
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	i = 0;
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	while (format != NULL && format[i] != '\0')
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
					count += m(args);
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
	va_end(args);
	return (count);
}
