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
	int c, cents = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (c >= 25)
	{
		cents += 1;
		c = c - 25;
	}
	while (c >= 10)
	{
		cents += 1;
		c = c - 10;
	}
	while (c >= 5)
	{
		cents += 1;
		c = c - 5;
	}
	while (c >= 2)
	{
		cents += 1;
		c = c - 2;
	}
	while (c >= 1)
	{
		cents += 1;
		c = c - 2;
	}
	printf("%d\n", cents);
	return (0);
}
