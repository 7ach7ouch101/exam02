char    *ft_strrev(char *str)
{
    if(!str)
        return 0;
    int len;
    int i;
    char tmp;

    i = 0;
    len = 0;
    while(str[len])
        len++;
    len--;
    while(i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
        i++;
    }
    return str;
}
