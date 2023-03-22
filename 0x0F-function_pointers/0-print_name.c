#include "function_pointers.h"
#include <string.h>
/**
 *print_name - print the name
 *@name: name of the person
 *@f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
else
f(name);
}
