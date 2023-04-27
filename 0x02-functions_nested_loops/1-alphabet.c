#include "main.h"
/**
 *  print_alphabet - access to function
 *  Description: prints letters from a to z
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <=  'z'; letter++)
		_putchar(letter);

	_putchar ('\n');
}
