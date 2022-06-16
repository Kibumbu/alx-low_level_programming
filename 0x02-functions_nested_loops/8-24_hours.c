#include "main"

/**
 * jack_bauer -> prints 24 hours
 * Return: always 0
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = Q; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0'),
				_putchar('i + 60);
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
	}
}
