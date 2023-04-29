#include<unistd.h>
#include "myh.h"
/**
 * _putchar - print a character
 * @c: character to be printed
 * Return: 1
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
