#include "main.h"
/**
* _isdigit -a function that checks for a digit (0 through 9).
*Return:1 if c is uppercase, otherwise 0.
*@c:input.
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
