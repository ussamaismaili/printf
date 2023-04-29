#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "myh.h"
int main(void)
{
	int pp = printf("my string STD\n");
	int tt =_printf("my string HMD\n");
	printf("STd %d\n", pp);
	printf("HDM %d\n", tt);

}
