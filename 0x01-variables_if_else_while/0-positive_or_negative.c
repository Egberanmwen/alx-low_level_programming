#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 main-Entry point
return always 0 (Success)
betty style doc for function main is  here
*/
int main(void)
{

	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* Your code is inserted here */

if (n > 0)
printf(" %d is positive ", n);
else if (n == 0)
printf(" %d is zero ", n);
else
printf(" %d is negative ", n);
return (0);
}
