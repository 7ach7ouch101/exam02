#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    j = 0;
    i = 0;
    if(ac == 2)
    {
        while(av[1][i])
            i++;
        while(av[1][i] <= 33 || av[1][i] >= 127)
        {
            i--;
            if(i == 0)
                break ;
        }
        while(av[1][i] >= 33 && av[1][i] <= 127)
            i--;
        i++;
        while(av[1][i] >= 33 && av[1][i] <= 127)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}