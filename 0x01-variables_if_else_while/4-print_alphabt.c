#include <stdio.h>
/**
 * main - entry point
 * Description: prints lowercase alphabets only
 * Return: 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
	putchar(letter);
	}
	letter++;
	}

	putchar('\n');
	return (0);
}
