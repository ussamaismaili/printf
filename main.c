#include <unistd.h>
#include <stdio.h>
#include "myh.h"
/**
 * main - test file
 * Return: always 0
 */

int main(void)
{
	int count_std = 0;
	int count_hmd = 0;
	int p = 132;
	int l = 188;

	write(1,"STANDARD:\n",10);
	count_std = printf("My number is %d\n", l);
	printf("I printed %d characters\n", count_std);

	write(1,"________________________\n",25);

	write(1,"HOME_MADE:\n",11);
	count_hmd = _printf("My number is %d\n", p);
	printf("I printed %d characters\n", count_hmd);

	return (0);
}
