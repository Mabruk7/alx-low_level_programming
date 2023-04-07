#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	/* Initialize variables */
	int i;
	unsigned int dec_val = 0;

	/* Check for NULL input */
	if (!b)
		return (0);

	/* Iterate over the string */
	for (i = 0; b[i]; i++)
	{
		/* Check for invalid characters */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/* Calculate the decimal value of the binary number */
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	/* Return the converted value */
	return (dec_val);
}
