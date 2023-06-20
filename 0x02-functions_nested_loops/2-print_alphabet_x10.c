#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int lineNum, alpha;

	for (lineNum = 0; lineNum <= 9; lineNum;)
		for (alpha = 'a'; alpha = 'z'; alpha++)
			_putchar(alpha);
	_putchar('\n');
}
