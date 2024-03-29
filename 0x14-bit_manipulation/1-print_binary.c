#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			while (i > 0)
			{
				i--;
				current = n >> i;
				if (current & 1)
					_putchar('1');
				else
					_putchar('0');
			}
			return;
		}
	}
	_putchar('0');
}
