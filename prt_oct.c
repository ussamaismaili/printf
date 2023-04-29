#include "main.h"
/**
 * prt_oct -func that prints an octal number.
 * @val: arguments.
 * Return: cnt.
 */
int prt_oct(va_list args)
{
	int i;
	int *arr;
	int cnt = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(int));

	for (i = 0; i < cnt; i++)
	{
		arr[i] = temp % 8;
		temp /= 8;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnt);
}
