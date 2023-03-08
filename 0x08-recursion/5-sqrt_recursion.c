#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
* _sqrt_recursion -no loop. 1. 2nd function - checks for perfect square
*@n: number to calculate the natural square root
* Return: Always 0 (Success)
*/
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
*_sqrt -calculates the natural square root
*@n:number to calculate the square root
*@i: iterate number
* Return: the  square root
*/
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
