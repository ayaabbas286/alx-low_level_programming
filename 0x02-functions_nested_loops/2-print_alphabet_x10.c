#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int linenum, alpha;

	for (linenum = 0; linenum <= 9; linenum)
		for (alpha = 'a'; alpha = 'z'; alpha++)
			_putchar(alpha);
	_putchar('\n');
}
