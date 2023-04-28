#include "main.h"
/**
 * _isalpha - access point
 * @c: parameter
 * Description: prints alphabets
 * Return: 1 if is alpsh else 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
