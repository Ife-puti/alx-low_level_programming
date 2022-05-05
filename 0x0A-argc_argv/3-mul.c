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
	int i, res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
