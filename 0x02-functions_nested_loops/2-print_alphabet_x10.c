#include "main.h"
/**
* print_alphabet_x10 - prints aphabet 10 times
 * main - print lowercase alphabets
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}

