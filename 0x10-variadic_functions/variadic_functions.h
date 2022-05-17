#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdio.h>
/**
 * struct print - print type with corresponding print function
 * @symbol: a function pointer that prints
 * @print_func: a function pointer that prints a data type according to the symbol
 */
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif 
