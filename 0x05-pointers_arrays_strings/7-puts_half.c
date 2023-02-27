#include "main.h"
#include <stdio.h>
/**
*puts_half -the function that print the second half of the string.
*@str:input
*if odd len,n = (length_of_the_string - 1) / 2
*Return: half of input
*/
void puts_half(char *str)
{
	int i, n, len;
len = 0;
for (i = 0; str[i] != 0; i++)
len++;
n = (len / 2);
if ((len % 2) == 1)
n = ((len + 1) / 2);
for (i = n; str[i] != 0; i++)
_putchar(str[i]);
_putchar('\n');
}
