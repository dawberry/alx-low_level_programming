#include "main.h"

/**
 * _puts_recursion - print value
 * @s: value to be print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
