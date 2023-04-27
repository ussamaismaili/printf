#ifndef _MYH_H_
#define _MYH_H_

int _printf(const char *frmt, ...);
int _putchar(char c);
int _putstr(char *str);
int (*check_spec(char*))(val_list);
/**
 * struct fun - the struct for the specifier to the pointer.
 * @cm: charcter to be compared
 * @f: function handling to the specific printing type.
 */
typedef struct fun
{
	char *cm;
	int (*f)(val_list):
} fun_p;

#endif
