#include "main.h"

/**
 * print_alphabetX10 - print alphabet 10X
 */
void print_alphabet_x10(void)
{
	char j;
	int i = 1;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
