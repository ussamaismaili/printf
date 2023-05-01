int prt_hex2(unsigned long int num)
{
    int cnt = 0;
    int i;
    int arr[20];

    if (num == 0) {
        _putchar('0');
        return 1;
    }

    while (num > 0) {
        arr[cnt++] = num % 16;
        num /= 16;
    }

    for (i = cnt - 1; i >= 0; i--) {
        if (arr[i] < 10) {
            _putchar(arr[i] + '0');
        } else {
            _putchar(arr[i] - 10 + 'A');
        }
    }

    return cnt;
}
