#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:a program that prints all possible
 * combinations of single-digit numbers
 *
 * Return: 0 (success)
*/
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(digit + 0);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
