#include "main.h"
/**
 * _strlen - length of the string
 * @s: pointer to an int that will be updated
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '/0')
	{
		u++;
	}
	return (u);
}