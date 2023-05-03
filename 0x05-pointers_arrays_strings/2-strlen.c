#include "main.h"
/**
 * _strlen - legth of string
 * @s: parmeter
 * Return: answer
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
