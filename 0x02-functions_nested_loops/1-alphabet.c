#include "main.h"

/**
 * main - Entry point
 * Description: print_alphabet utlizes on the _putchar function
 * void function
*/
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);
	_putchar('\n');
}
