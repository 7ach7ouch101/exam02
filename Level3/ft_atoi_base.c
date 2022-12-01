char	to_low(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
int get_digit(char c, int str_base)
{
    int max_digit = 0;
    if(str_base <= 10)
        max_digit = c + '0';
    else
        max_digit = c - 10 + 'a';
    if(c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if(c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1);

}
int	ft_atoi_base(const char *str, int str_base)
{
    int digit = 0;
    int sing = 1;
    int res = 0;
    int i = 0;

    if(str[i] == '-')
    {
        sing = -1;
        i++;
    }

    while((digit = get_digit(to_low(str[i]) , str_base)) >= 0)
    {
        res = res * str_base;
        res = res + (digit * sing);
        i++;
    }
    return (res);
}