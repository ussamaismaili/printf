#include "main.h"
/**
 * prt_hex2 - prints an hexgecimal number too.
 * @num: the arguments.
 * Return: the nu,be counter.
*/
int prt_hex2(unsigned long int num)
{
    long int i;
    long int *arr;
    long int cnt = 0;
    unsigned long int temp = num;

    while (num / 16 != 0)
    {
        num /= 16;
        cnt++;
    }
    cnt++;
    arr = malloc(cnt * sizeof(long int));

    for (i = 0; i < cnt; i++)
    {
        arr[i] = temp % 16;
        temp /= 16;
    }
    for (i = cnt - 1; i >= 0; i--)
    {
        if (arr[i] < 10)
        {
            _putchar(arr[i] + '0');
        }
        else
        {
            if (arr[i] >= 10 && arr[i] <= 15)
            {
                _putchar(arr[i] - 10 + 'A');
            }
            else
            {
                _putchar(arr[i] - 10 + 'a');
            }
        }
    }
    free(arr);
    return (cnt);
}
