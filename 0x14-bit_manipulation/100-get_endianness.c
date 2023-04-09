#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;
if (*c == 1)
return (1);
return (0);
}
