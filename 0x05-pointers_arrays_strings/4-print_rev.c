#include "main.h"
/**
 * print_rev - access to function
 * @s: parameter
 * Description: prints rev string
 */
void print_rev(char *s)
{
	int len = 0;
	int revl;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (revl = len; revl > 0; revl--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}


