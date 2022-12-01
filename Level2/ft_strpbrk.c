char	*ft_strpbrk(const char *s1, const char *accept)
{
    if(!s1 || !accept)
        return 0;
    int j;
    j = 0;
    while(*s1)
    {
        j = 0;
        while(accept[j])
        {
            if(accept[j] == *s1)
                return (char*)s1;
            j++;
        }
        s1++;
    }
    return (0);
}