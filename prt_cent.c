#include "myh.h"
/**
 * prt_cent - it prints the character % .
 * @args: the variadic parameter.
 * Return: the number of characters that have printed.
 */
int prt_cent(va_list args)
{
	(void)args;

	write(1, "%", 1);
	return (1);
}
