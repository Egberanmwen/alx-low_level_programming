#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char a;
	int d;
	long int b;
	long long int c;
	float f;
printf("Size of char: %lu byte(S)\n",(unsigned long)sizeof(a));
printf("Size of an int : %lu byte(s)\n",(unsigned long)sizeof(d));
printf("Size of long int: %lu byte(S)\n",(unsigned long)sizeof(b));
printf("Size of long long int: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of a float: %lu byte(S)\s",(unsigned long)sizeof(f));
return (0);
}

