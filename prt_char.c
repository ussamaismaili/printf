#include "main.h"
/**
 * prt_char - a function that prints a character .
 * @args: the variadic parameter.
 * Return: the number of characters thet was printed .
 */
int prt_char(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	else
	{
		count = write(1, "\0", 1)
		return (count);
	}
	return (0);
}
