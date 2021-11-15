/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 09:09:33 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/23 14:23:13 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (0);
	i = 0;
	tab = (int *)malloc(((max - min) + 1) * sizeof(int));
	while (min < max)
	{
		tab[i++] = min++;
	}
	tab[i] = '\0';
	return (tab);
}
