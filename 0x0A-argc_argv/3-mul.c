#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers containing strings entering main
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int n, ex;
	if (argc != 3)
	{
		printf("%\n", "Error");
		ex = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ex);
}
