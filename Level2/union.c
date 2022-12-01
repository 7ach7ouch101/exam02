#include <unistd.h>

int check_double(char c, char *str , int len)
{
    int i;
    i = 0;
    while(i < len)
    {
        if(str[i] == c)
            return 0;
        i++;
    }
    return 1;
}
int main(int ac, char **av)
{
    int i;
    int j;
    int a;
    a = 0;
    j = 0;
    i = 0;
    if(ac == 3)
    {
        while(av[1][i])
            i++;
        while(av[2][j])
        {
            av[1][i] = av[2][j];
            i++;
            j++;
        }
        i--;
        while(a <= i)
        {
            if(check_double(av[1][a], av[1],a) == 1)
                write(1 , &av[1][a] , 1);
            a++;
        }
    }
    write(1 , "\n" , 1);
    return 0;
}