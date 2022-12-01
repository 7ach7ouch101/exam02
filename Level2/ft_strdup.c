#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    int j;
    char *str;
    i = 0;
    j = 0;
    while(src[i])
        i++;
    str = malloc(i + 1);
    while(src[j])
    {
        str[j] = src[j];
        j++;
    }
    str[j] = '\0';
    return str;
}