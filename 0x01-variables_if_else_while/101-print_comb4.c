#include <stdio.h>

/**
 * main -> prints all possible different combinations of three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * Print only the smallest combination of three digits
 * Return: always (0)
 */
int main(void)
{
	int ch;
	int n;
	int m;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			for (m = 50; m <= 57; m++)
			{
				if (n > ch && n > m)
				{
					putchar(ch);
					putchar(n);
					putchar(m);
					if (ch != 55 || n != 56 || m != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);

	return (0);
}
