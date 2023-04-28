#include "main.h"
/**
 * print_last_digit - acees to function
 * @n: parameter
 * Description: prints last number
 * Return: the value
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

