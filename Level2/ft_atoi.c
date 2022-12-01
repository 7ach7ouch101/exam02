int	ft_atoi(const char *str)
{
    int i;
    int sing;
    int res;
    sing = 1;
    i = 0;
    while(str[i] <= 33 && str[i] >= 127)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sing = sing * (-1);
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sing);
}