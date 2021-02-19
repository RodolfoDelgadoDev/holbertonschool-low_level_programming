#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * @s: SSSSssssSSS
 * Return: Always 0.
 */
char *cap_string(char *s)
{

int i;
for (i = 0; s[i] != '\0'; i++)
{
if ( s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
if ( (s[i - 1] == ' ') || (s[i - 1] == '\t') )
   s[i] = s[i] - 32;
}
return (s);
}
