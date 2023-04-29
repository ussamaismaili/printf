#include "main.h"
/**
 * check_spec - checks that the the specifier passed is a valid one,
 * and the run the specific function.
 * @frmt: the specifier .
 * Return: If it's not a null it returns a pointer to the function.
 */
int (*check_spec(const char *frmt))(va_list)
{
	fun_p array[12] = {
		{"c", prt_char},
		{"s", prt_str},
		{"%", prt_cent},
		{"i", prt_int},
		{"d", prt_int},
		{"o", prt_oct},
		{"R", prt_rot},
		{"r", prt_rot},
		{"x", prt_hex},
		{"X", prt_hex},
		{"b", prt_bin},
		{NULL, NULL}};
	int i;

	for (i = 0; array[i].cm != NULL; i++)
	{
		if (*(array[i].cm) == *frmt)
		{
			return (array[i].f);
		}
	}
	return (NULL);
}
