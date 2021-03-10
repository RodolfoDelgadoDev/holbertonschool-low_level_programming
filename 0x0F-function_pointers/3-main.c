#include "3-calc.h"

/**
 * main - main
 * @argc: The operator
 * @argv: The function associated
 * Return: return
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(n1, n2));
	return (0);

}
