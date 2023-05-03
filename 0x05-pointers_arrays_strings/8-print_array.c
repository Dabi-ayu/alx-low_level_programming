#include "main.h"
#include <stdio.h>
/**
 * print_array - access
 * @a: array
 * @n: paramter
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < (n - 1); index++)
	{
		printf("%d ", a[index]);
		if (index == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf('\n');
}
