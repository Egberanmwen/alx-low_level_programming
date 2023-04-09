#include "main.h"
/**
*clear_bit - function that sets the value of a bit to 0 at a given index.
*
* @n: a pointer to the bits
*@index: the index to set the value at - it start from 0
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
return (*n | (1 << (index - 1)));
}
