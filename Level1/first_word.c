#include<unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;

    if(ac == 2)
    {
        while((av[1][i] <= 33 || av[1][i] >= 127) && av[1][i] != '\0')
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