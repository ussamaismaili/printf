#include "myh.h"
/**
 * prt_str - a function that prints a variadic string .
 * @args: the variadic parameter.
 * Return: the  number of characters printed on Success or -1 on failure .
 */
int prt_str(va_list args)
{
	int i;
	int cnt = 0;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		return (-1);

	while (str[i])
	{
		cnt = write(1, &str[i], 1);
		i = i + 1;
	}
	return (cnt);
}
