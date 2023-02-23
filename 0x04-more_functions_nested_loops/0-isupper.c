#include "main.h"
/**
*_isupper -a function that checks for uppercase character.
*Return:1 if c is uppercase,otherwise 0.
*@c:input
*/
int _isupper(int c)
{
	int i;
for ((i = 'A'; i <= 'Z'; i++)
if (i == c)
return (1);
return (0);
}
