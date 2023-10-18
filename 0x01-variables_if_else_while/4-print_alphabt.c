#include <stdio.h>
/**
 * main - prints alphabets without q and e
 * Return: Always 0
 */

int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);

}
