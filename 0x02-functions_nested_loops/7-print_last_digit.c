#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: n is the int that ww will use for the argument of the function
 *Return: integer value
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;

	-putchar (lasts + '0');

	return (last);
}
