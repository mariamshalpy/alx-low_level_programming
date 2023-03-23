
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	char i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
