#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *frmt, ...);
int _putchar(char c);
int _putstr(char *str);
int (*check_spec(const char *))(va_list);
int prt_oct(va_list args);
int prt_rot(va_list args);
int prt_hex(va_list args);
int prt_oct(va_list args);
int prt_bin(va_list args);
int prt_uns(va_list args);
int prt_spec(va_list args);
int prt_hex2(unsigned long int num);
int prt_ptr(va_list args);
int prt_srev(va_list args);
int prt_37();
/**
 * struct fun - the struct for the specifier to the pointer.
 * @cm: charcter to be compared
 * @f: function handling to the specific printing type.
 */
typedef struct fun
{
	char *cm;
	int (*f)(va_list);
} fun_p;

int prt_char(va_list);
int prt_str(va_list);
int prt_cent(va_list);
int prt_int(va_list);
int prt_dec(va_list);

#endif
