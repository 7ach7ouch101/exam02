#include <unistd.h>

int ft_atoi(char *str)
{
    int res;
    int sing;
    int i;
    sing = 1;
    res = 0;
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

void    ft_putnbr(int n)
{
    char num;
    if(n >= 10)
        ft_putnbr(n / 10);
    num = (n % 10) + '0';
    write(1 , &num, 1);
}

int is_prime(int n)
{
    int i;
    i = 3;
    if(n <= 1)
        return 0;
    if(n % 2 == 0 && n > 2)
        return 0;
    while(i < (n / 2))
    {
        if(n % i == 0)
            return 0;
        i = i + 2;
    }
    return 1;
}

int main(int ac, char **av)
{
    int nbr;
    int sum;
    sum = 0;
    if(ac == 2)
    {
        nbr = ft_atoi(av[1]);
        while(nbr)
        {
            if(is_prime(nbr))
                sum = sum + nbr;
            nbr--;
        }
        ft_putnbr(sum);
    }
    else
        ft_putnbr(0);
    write(1 , "\n", 1);
    return 0;
}