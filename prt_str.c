#include "main.h"
/**
 * prt_str - a function that prints a variadic string .
 * @args: the variadic parameter.
 * Return: the  number of characters printed on Success or -1 on failure .
 */
int prt_str(va_list args)
{
	int i = 0;
	int cnt = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{	
		cnt = write(1, "(null)", 6);
		return cnt;
	}

	while (str[i])
	{
		cnt = write(1, &str[i], 1);
		i++;
	}
	return cnt;
}

