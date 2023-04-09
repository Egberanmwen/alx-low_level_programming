#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ni;
	int i, bin;
if (!b)
return (0);
ni = 0;
for (i = 0; b[i] != '\0'; i++)
;
for (i--, bin = 1; i >= 0; i--, bin *= 2)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
if (b[i] & 1)
ni += bin;
}
return (ni);
}
