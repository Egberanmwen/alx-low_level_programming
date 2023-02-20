#include <stdio.h>
/*
 * main -Entry point
 * betty style doc for function main goes there
 * return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;
/*Your code goes there*/

c = 'a';
d = 'A';
while (c <= 'z')
{putchar (c), c++;
}
while (d <= 'Z')
{putchar (d), d++;
}
putchar('\n');
return (0);
}
