#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int start = 0;
    int end = 0;
    int flag = 0;

    if(ac > 1)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        start = i;
        while(av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
            i++;
        end = i;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i])
        {
            flag = 1;
            while(av[1][i] == ' ' || av[1][i] == '\t')
            {
                if((av[1][i + 1] != ' ' && av[1][i + 1] != '\t'))
                    write(1 , " " , 1);
                i++;
            }
            write(1 , &av[1][i] , 1);
            i++;
        }
        if(flag == 1)
            write(1 , " ", 1);
        while(start < end)
        {
            write(1 , &av[1][start] , 1);
            start++;
        }
    }
    write(1 , "\n", 1);
    return (0);
}