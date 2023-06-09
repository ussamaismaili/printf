#include "main.h"
/**
 * prt_hex - prints an hexgecimal number.
 * @args: arguments.
 * Return: counter.
 */
int prt_hex(va_list args)
{
	int i;
	int *arr;
	int cnt = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		cnt++;
	}
	cnt++;
	arr = malloc(cnt * sizeof(int));

	for (i = 0; i < cnt; i++)
	{
		arr[i] = temp % 16;
		temp /= 16;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (cnt);
}
