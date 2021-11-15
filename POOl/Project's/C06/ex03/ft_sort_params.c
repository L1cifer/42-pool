/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:49:27 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/19 10:27:25 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	char *tab;

	i = 1;
	while (i < ac -1)
	{
		if(ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tab = av[i];
			av[i] = av[i +1];
			av[i + 1] = tab;
			i = 0;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{	
		ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
	}
	return (0);
}
