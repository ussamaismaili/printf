#include "main.h"
/**
 * prt_ptr - handles a function pointer.
 * @args: the arguments.
 * Return: the nuber counted.
 */
int prt_ptr(va_list args)
{
	void *p;
	char *s = "(null)";
	long int a;
	int b;
	int i;

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = prt_hex2(a);
	return (b + 2);
}
