#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int *range;
    int n;
    int i;

    i = 0;
    n = end - start + 1;
    range = malloc(sizeof(int) * n);

    while(end >= start)
    {
        range[i] = end;
        end--;
        i++;
    }
    return (range);
}