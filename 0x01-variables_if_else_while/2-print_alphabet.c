#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: while loop to write alphabet
 *
 *Return: 0 (Success)
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
