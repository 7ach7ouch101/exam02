#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sing;
    int res;

    sing = 1;
    i = 0;
    while(str[i] <= 33 && str[i] >= 127)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sing = sing * (-1);
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sing);
}

void    print_hex(int n)
{
    char str[] = "0123456789abcdef";

    if(n >= 16)
        print_hex(n / 16);
    write(1 , &str[n % 16], 1);
}