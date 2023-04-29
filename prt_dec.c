#include "myh.h"
/**
 * prt_dec - a function that prints the fiven in from the
 * variadic parameters to base 10 .
 * @args: the variadic parameter.
 * Return: The Number of characters .
 */
int prt_dec(va_list args)
{
	int i = 0;
	int cnt = 0;
	int num;
	int arr[10];
	char x[1];

	num = va_arg(args, int);
	while (num != 0)
	{
		arr[i] = (num % 10);
		num = num / 10;
		if (num == 0)
		{
			break;
		}
		else
			i++;
	}

	for (i; i >= 0; i--)
	{
		x[0] = ('0' + arr[i]);
		cnt += write(1, x, 1);
	}

	return (cnt);
}
