/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:14:15 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/16 09:48:07 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

unsigned	int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	size = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest [size + i] = src [i];
		i++;
	}
	dest [size + i] = '\0';
	return (dest);
}
