/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:29:41 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/24 09:31:46 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;
	int		j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	i = 0;
	j = max - min;
	while (i < j)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}
