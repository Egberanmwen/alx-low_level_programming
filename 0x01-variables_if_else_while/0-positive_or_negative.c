#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * betty style doc for function main is inserted here
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Your code is inserted here */

if (n > 0)
printf(" %dis positive", n);
else if (n == 0)
printf(" %dis zero", n);
else
printf(" %dis negative", n);
return (0);
}
