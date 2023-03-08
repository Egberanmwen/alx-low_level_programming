#include "main.h"
#include <stdio.h>
int prime_checker(int n, int i);
/**
 * is_prime_number -Returns if a number is prime
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (prime_checker(n, n / 2) > 0)
return (1);
else
return (0);
}

/**
 *prime_checker -checks if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 * Return: 1 for prime or 0 composite
 */
int prime_checker(int n, int i)
{
if (n == 2)
return (1);
if (n % i == 0)
return (1);
else
return (prime_checker(n, i - 1));
}
