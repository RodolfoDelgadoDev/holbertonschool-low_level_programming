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
	int resultado;

	if (argc == 3)
	{
		resultado = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", resultado);
		return (0);
	}
	printf("Error");
	return (1);
}
