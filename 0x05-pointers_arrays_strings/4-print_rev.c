#include "main.h"
#include <string.h>
/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(s);

	for (i = len - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
