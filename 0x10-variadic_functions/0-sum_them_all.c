#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameter
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum of
 *
 * Return: If n == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...);
{
	va_list argc;
	unsigned int sum, i = 0;

	va_start(argc, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argc, int);

	va_end(argc);

	return (sum);
}
