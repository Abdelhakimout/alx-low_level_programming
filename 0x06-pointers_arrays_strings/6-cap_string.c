#include "main.h"

/**
 * cap_string - capitalize first letter of each word
 * @str: the string
 * Return: the new string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';
	i++;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
		    && (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n'))
			str[i] = str[i] - 'a' + 'A';
		i++;
	}

	return (str);
}
