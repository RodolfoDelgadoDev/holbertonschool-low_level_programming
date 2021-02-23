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
int n = 0;

while (s[n] != '\0')
{
	if (s[n] == c)
	{
		char *r = &s[n];

		return (r);

	}

n++;
}

return (NULL);

}
