
int main()
{
    int	i;
	int	j;
	i = 0;
	j = 0;
	int *t;
	int min = 0;
	int max = 20;
	int len ;
	len = max - min;

	t = ft_range(min,max);
	while (i < len)
	{
		printf("%d, ,",t[j]);
		i++;
		j++;
	}
	return (0);
}

int main()
{
    int *tab[20];
    int i;
    i = 0;
    printf("%d" ,ft_ultimate_range(tab,10,-10));
    for(i = 0 ; i < 60 ; i++)
    printf("%d",tab[0][i]);
}




#include <stdio.h>

int main (void)
{
	char *tab [] = {"aymane","taki","get the fuck","fromhere"} ;
	printf("%s",ft_strjoin(4,tab,"----------") );
}