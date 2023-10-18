#include <stdio.h>
/**
 * main - print reversed alphabets
 * Return: 0
 */

int main(void)
{
	char alphabets[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}


