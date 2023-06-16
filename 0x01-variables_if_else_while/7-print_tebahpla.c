#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: while loop to write alphabet
 * (z-a)
 *Return: 0 (Success)
*/
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
