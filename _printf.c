#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - prints a string in a formatted way
 * @frmt: string to print (char *)
 * @...: variadic parameters (unknown)
 * Return: number of characters printed
 */
int _printf(const char *frmt, ...)
{
	int i = 0, value = 0, cnt = 0, (*f)(va_list);
	va_list args;

	va_start(args, frmt);
	if (frmt == NULL)
		return (-1);
	while (frmt[i])
	{
		if (frmt[i] != '%')
		{
			value = write(1, &frmt[i], 1);
			cnt += value;
			i++;
			continue;
		}

		if (frmt[i] == '%')
		{
			f = check_spec(&frmt[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				cnt += value;
				i = i + 2;
				continue;
			}

			if (frmt[i + 1] == '\0')
				break;

			if (frmt[i + 1] != '\0')
			{
				value = write(1, &frmt[i], 1);
				cnt += value;
				i += 2;
				continue;
			}
		}
	}
	return (cnt);
}
