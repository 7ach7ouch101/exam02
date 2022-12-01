size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;
    j = 0;
    i = 0;
    while(s[i] != '\0')
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}