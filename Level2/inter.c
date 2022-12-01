#include <unistd.h>

int check_double(char *str, char c, int len)
{
    int i;
    int doub;
    i = 0;
    doub = 0;
    while(i <= len)
    {
        if(str[i] == c)
            doub++;
        i++;
    }
    if(doub == 1)
        return 1;
    return 0;
}
int main(int ac, char **av)
{
    int i;
    int j;
    int a;
    i = 0;
    if(ac == 3)
    {
        while(av[1][i])
        { 
            j = 0;
            a = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                {
                    if(check_double(av[1], av[2][j], i) == 1)
                    {
                        a++;
                        write(1, &av[1][i], 1);
                    }
                }
                if(a == 1)
                    break ;
                j++;
            }
            i++;
        }
    }
    write(1 , "\n", 1);
    return 0;
}