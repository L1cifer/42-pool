/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:24:37 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/23 14:28:46 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min <= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
	{
		*range = NULL ;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		tab[i++] = min++;
		*range = tab;
	}
	return (i);
}
