#include "main.h"
/**
* main - Entry point
*
* Description: prints _putchar using putchar protoype
*
* Return: Always 0 (success)
*/
int main(void)
{
	char str[] = "putchar";
	int ch;

	for (ch = 0; ch < 8; ch++;)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
