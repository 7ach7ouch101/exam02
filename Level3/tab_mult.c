#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int res;
    res = 0;
    i = 0;
    while(str[i] <= 33 && str[i] >= 127)
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res);
}

void    ft_putnbr(int n)
{
    char num;
    if(n >= 10)
        ft_putnbr(n / 10);
    num = (n % 10) + '0';
    write(1 , &num , 1);
}

int main(int ac, char **av)
{
    int nmbr;
    int i;
    i = 1;
    if(ac == 2)
    {
        nmbr = ft_atoi(av[1]);
        while(i <= 9)
        {
            ft_putnbr(i);
            write(1 , " x ", 3);
            ft_putnbr(nmbr);
            write(1 , " = ", 3);
            ft_putnbr(i * nmbr);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1 , "\n", 1);
    return 0;
}