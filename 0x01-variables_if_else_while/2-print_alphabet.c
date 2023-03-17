#include <stdio.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);


}
