#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 *
 * Return: on success 1
 * on error, -1 is returned and errot is set appropriately
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(1 + s);
}
