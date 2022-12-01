size_t	ft_strspn(const char *s, const char *accept)
{
    int i;
    int count;
    int j;

    j = 0;
    count = 0;
    i = 0;
    while(s[i])
    {
        while(accept[j])
        {
            if(s[i] == accept[j])
                count++;
            j++;
        }
        i++;
    }
    return count;
}