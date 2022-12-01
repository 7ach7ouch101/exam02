#include <stdlib.h>
#include <stdio.h>

# define WD_NUM 1000
# define WD_LEN 1000

char    **ft_split(char *str)
{
	char **tab;
	int i = 0;
	int i2 = 0;
	int i3 = 0;

	tab = malloc(sizeof(char**) * WD_NUM);
	if(tab == NULL)
		return (NULL);
	while(str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		i++;
	while(str[i])
	{
		i3 = 0;
		if(str[i] > 32)
		{
			tab[i2] = malloc(sizeof(char) * WD_LEN);
			while(str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = '\0';
	return (tab);
}