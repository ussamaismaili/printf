#include "main.h"
/**
 * prt_bin - prints a binary number.
 * @args: the arguments.
 * Return: 1.
 */
int prt_bin(va_list args)
{
	int flag = 0, int cnt = 0, int i, a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cnt++;
		}
	}
	if (cnt == 0)
	{
		cnt++;
		_putchar('0');
	}
	return (cnt);
}
