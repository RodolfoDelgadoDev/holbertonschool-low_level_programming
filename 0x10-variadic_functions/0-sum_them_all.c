#include "variadic_functions.h"

/**
 * sum_them_all - suma toda gato
 * @n: nene
 * Return: depende viejo, a veces 0 y otras veces un numero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;
	unsigned int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);


}
