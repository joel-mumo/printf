#include <limits.h>
#include<stdio.h>
#include"main.h"
/**
 * main - test
 *
 * Return: 0
 */

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to print a simple sentence.\n");
	len2 = printf("Let's try to print a simple sentence.\n");
	_printf("character:[%c]\n", 'H');
	printf("character:[%c}\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	 printf("Len:[%d]\n", len2);
	return (0);
}