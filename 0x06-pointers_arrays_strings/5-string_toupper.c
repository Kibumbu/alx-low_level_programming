#include "main.h"
#include <string.h>

/**
 * string_toupper -> converting any string to upper case
 * changes all lowercase letters of a string to uppercase.
 * @x: string param
 * Return: string param
 */
char *string_toupper(char *)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
