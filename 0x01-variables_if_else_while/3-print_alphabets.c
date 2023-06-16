#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: while loop to write alphabet
 * in lower and upper cases
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
