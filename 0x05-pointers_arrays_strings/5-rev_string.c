#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: Ssssssss
 * Return: Always 0.
 */
void rev_string(char *s)
{
int a = 0;
int g;
int j = 0;

while (s[a] != '\0')
{
a++;
}
a--;
while (a >= j)
{
g = s[a];
s[a] = s[j];
s[j] = g;
a--;
j++;
}

}
