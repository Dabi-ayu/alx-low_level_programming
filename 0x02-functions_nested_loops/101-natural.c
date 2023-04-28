#include <stdio.h>
/**
 * main - access point
 * Descripttion: prints multiples of 3 and 5
 * Return: always success
 */
int main(void)
{
	int i, z = 0;

	while (i < 1023)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += 1;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
