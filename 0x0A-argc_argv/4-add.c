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
	int ch = 1;

	for (c = 1; c < argc; c++)
	{
		for (ch = 1; argv[c][ch] != '\0'; ch++)
		{
			if (argv[c][ch] < 48 || argv[c][ch] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		cuenta += atoi(argv[c]);
	}

	printf("%d\n", cuenta);
	return (0);

}
