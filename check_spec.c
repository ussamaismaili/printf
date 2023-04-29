#include "myh.h"
#include<stdarg.h>
#include<stdlib.h>
/**
 * check_spec - checks that the the specifier passed is a valid one,
 * and the run the specific function.
 * @frmt: the specifier .
 * Return : If it's not a null it returns a pointer to the function.
 */
int (*check_spec(const char *frmt))(va_list)
{
	fun_t array[4] = {
		{"c", _putchar},
		{"s", _putstr},
		{"%", _percent},
		{NULL , NULL}};
	}
	int i;
	for (i = 0 ; array[i].cm != NULL ; i++)
		if (*(array[i].cm) == *frmt)
		{
			return (array[i].f);
		}
	return (NULL);
}
