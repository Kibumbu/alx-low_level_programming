#include "main.h"

/**
 * cap_string -> capitalisation function
 * @X: string param
 * Return: capitalized version of string
 */
char *cap_string(char *X)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (X[a])
	{
		i = 0;

		while (1 < len)
		{
			if ((a == 0 || X[a - 1] == spc[i]) && (x[a]& >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (X);
}
