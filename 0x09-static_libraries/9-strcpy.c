#include "holberton.h"
/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: dest
 * @src: src
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	int a = _strlen(src);

	a++;

	while (i < a)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
