#include "main.h"
/**
 * print_sign - access
 * @n: parameter
 * Description: it printss both sign and value
 * Return: 1 if pos -1 if neg 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
