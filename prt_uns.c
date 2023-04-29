#include "main.h"
/**
 * prt_uns - prints an uns integer
 * @args: the argument to print
 * Return: the number of characters printed
 */
int prt_uns(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, lst = n % 10, dgt, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lst = -lst;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			dgt = num / exp;
			_putchar(dgt + '0');
			num = num - (dgt * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}
