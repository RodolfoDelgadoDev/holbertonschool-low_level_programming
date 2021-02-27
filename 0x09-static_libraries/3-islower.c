#include "holberton.h"
/**
 * _islower - Entry point
 * @c: nothing
 * Return: c (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
