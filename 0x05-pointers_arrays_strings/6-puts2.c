#include "main.h"
/**
 * puts2 - function access
 * @str: parameter
 * Description: function to do
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	int *p = str;
	int j;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	i = len - 1;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
