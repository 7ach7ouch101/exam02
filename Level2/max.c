int		max(int* tab, unsigned int len)
{
    int i;
    int max;
    i = 0;
    max = 0;
    if(len == 0)
        return 0;
    max = tab[i];
    while(i <= len)
    {
        if(max < tab[i + 1])
            max = tab[i + 1];
        i++;
    }
    return max;
}
