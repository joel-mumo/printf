#include "main.h"

/**
 * get_func - searches for the specifier
 * @s: variable to the function
 * Return: The function
 */
int (*get_func(char s))(va_list)
{

	op_t arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	int i = 0;

	while (arr[i].spec != NULL)
	{

		if (*arr[i].spec == s)
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
