#include "main.h"
/**
 * swap_int - access point
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
