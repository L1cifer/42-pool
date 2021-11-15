/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:05:09 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/23 14:20:11 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	tul(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*pt;

	len = tul(src);
	pt = malloc(sizeof(char) *(len + 1));
	if (pt)
		i = 0;
	while (i < len)
	{
		pt[i] = src[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
