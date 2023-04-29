#include "main.h"
/**
 * prt_spec -it prints special string.
 * @args: the arguments.
 * Return: it ret the length of the string.
 */

int prt_spec(va_list args)
{
	char *s;
	int i, len = 0;
	int cst;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cst = s[i];
			if (cst < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + prt_hex2(cst);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
