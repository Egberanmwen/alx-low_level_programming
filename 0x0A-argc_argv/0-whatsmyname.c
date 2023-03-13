#include "main.h"
#include <stdio.h>

/**
 * main - prints its name + \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
        /*char *name = argv[0];*/
	printf("%s\n", *argv);
	return 0;
}
