#include <stdio.h>
/**
 * main - the access point
 * Description: this prints the sizes integers
 * Return: always success 
 */
int main(void)
{
	char c;
	int i;
	long int il;
	long long int lli;
	float p;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(il));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));
	return (0);
}
