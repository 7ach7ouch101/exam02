#include <unistd.h>

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
        while(av[2][i])
        {
            if(av[1][j] == av[2][i])
                j++;
            i++;
        }
        if(av[1][j] == '\0')
        {
            while(av[1][a])
            {
                write(1 , &av[1][a] , 1);
                a++;
            }
        }
    }
    write(1 , "\n" , 1);
    return 0;
}