#include "main.h"
/**
 * *_strcpy - access
 * @dest: first parameter
 * @src: second parameter
 * Return: returns answer
 */
char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	}
	while
	{
		src[z] != '\0';
	}
	return (dest);
}
