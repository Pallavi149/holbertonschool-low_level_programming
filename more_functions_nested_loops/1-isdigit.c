#include"main.h"
/**
*_isdigit - cheks for a digit(0 through 9)
*@c: The character to print
*
*Return: Always return 0
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

