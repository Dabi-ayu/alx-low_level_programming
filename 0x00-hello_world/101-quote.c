#include <stdio.h>
#include <unistd.h>
/**
 * main - acess point
 * Description: this will print on the error output
 * Return: this return one
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
