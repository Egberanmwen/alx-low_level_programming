#include <stdio.h>
/*
 *  main-Entry point
 *  betty style docfunction main is inserted here
 * return : Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;
/* Insert your code here */
c = 'a';
d = 'A';
while (c <= 'z')
{putchar(c), c++;
}
while (d <= 'Z')
{putchar(d), d++;
}
putchar('\n');
return (0);
}
