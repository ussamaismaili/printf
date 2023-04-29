#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "myh.h"
/**
 * _printf - a function that prints strings in a formated manners
 * @frmt :
 */
int _printf(const char *frmt ,...)
{
	int i = 0;
	int cnt = 0;
	int value =0;
	va_list args;
	va_start(args, frmt);
	int (*f)(va_list);

	if (frmt == NULL)
		return (-1):
	while (frmt[i])
	{	
		if (frmt != '%')
		{
			value = write(1, &frmt[i], 1);
			cnt += value;
			i++;
			continue;
		}
		else if (frmt == '%')
		{
			i++;
			f = check_spec(frmt[i]);
			if (f != NULL)
			{
				value = f(args);
				cnt += value;
				i = i + 2;
				continue;
			}
			else if (frmt[i + 1] == "\0")
			{ 
				break;
			}
			else if (frmt[i + 1] != "\0")
			{
				value = write(1, &frmt[i], 1);
				cnt += value;
				i+= 2;
				continue;
			}
		}
	}
	return (cnt);
}
