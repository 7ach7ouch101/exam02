#include <unistd.h>

void    ft_putnbr(int arg)
{
    char num;

    if(arg >= 10)
        ft_putnbr(arg / 10);
    num = (arg % 10) + '0';
    write(1 , &num , 1);

}