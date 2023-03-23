#include "main.h"
/**
 *print_sign- prints the sign of the a number
 *@n: the int to be checked
 *Return: 1 and prints + if n is greator than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
