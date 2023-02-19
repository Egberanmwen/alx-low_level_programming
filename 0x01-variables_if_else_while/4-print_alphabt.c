#include <stdio.h>
/*
 * main -Entry point
 * betty doc style for function main goes there
 * return: Always 0 (Success)
 */
int main(void)
{
	char c;
/*Your code goes there*/

c = 'a';
while (c <= 'z')
{putchar (c), c++;
}
putchar('\n');
return (0);
}
