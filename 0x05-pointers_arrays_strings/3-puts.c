#include "main.h"
/**
 * _puts - to print a string
 * @str: parameter
 * Description: prints sring
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
