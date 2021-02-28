#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argument counter
 * @argv: argument v.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int c;
	int cuenta = 0;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (c = 1; c < argc; c++)
	{
		if (*argv[c] >= 48 && *argv[c] <= 57)
			cuenta += atoi(argv[c]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", cuenta);
	return (0);

}
