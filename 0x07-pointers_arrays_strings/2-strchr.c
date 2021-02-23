#include "holberton.h"
#define NULL ((void *)0)
/**
 * *_strchr - mamaaaauwuwuuu
 * @c: the address of memory to print
 * @s: the size of the memory to print
 *
 * Return: c
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
	if (*s == c)
	{
		return (s);

	}

s++;
}

return (NULL);

}
