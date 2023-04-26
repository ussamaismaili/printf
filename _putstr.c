#include<unistd.h>
#include "main.h"
/**
 * _putstr - function that prints a string
 *
 * @str: the string
 *
 * Return: return allthe  legthn 
 */
int _putstr(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
