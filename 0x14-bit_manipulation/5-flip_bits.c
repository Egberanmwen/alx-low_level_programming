#include "main.h"
/**
 *int flip_bits - function that returns the number of bits you would need
 *to flip to get from one number to another.
 *
 *@n: the number to be flipped
 *@m: the number to flipp n to
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xcl = n ^ m, bits = 0;
while (xcl > 0)
{
bits += (xcl & 1);
xcl >>= 1;
}
return (bits);
}
