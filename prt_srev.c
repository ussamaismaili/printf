#include "main.h"
/**
 * prt_srev -a function that prints a string in reverse.
 * @args: type arguments.
 * Return: the string reve
 */
int prt_srev(va_list args)
{

        char *s = va_arg(args, char*);
        int i;
        int j = 0;

        if (s == NULL)
                s = "(null)";
        while (s[j] != '\0')
                j++;
        for (i = j - 1; i >= 0; i--)
                _putchar(s[i]);
        return (j);
}
