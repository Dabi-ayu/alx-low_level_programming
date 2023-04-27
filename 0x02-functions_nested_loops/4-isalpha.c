#include "main.h"
/**
 * _isalpha - access to function
 * @c: parameter
 * Description: prints alphabets
 * Return: answer is returned
 */
int _isalpha(int c)
{
	return ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'));
}
