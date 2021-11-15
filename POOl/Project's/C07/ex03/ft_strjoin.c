/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:01:45 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/26 15:20:31 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
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

int	ft_strall(int	size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len + (size - 1) * ft_strlen(sep));
}

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	i = 1;
	if (size == 0)
	{
		tab = malloc(sizeof(char) * 1);
		*tab = 0;
		return (tab);
	}
	tab = (char *)malloc(sizeof(char) * (ft_strall(size, strs, sep) + 1));
	if (tab == NULL)
		return (NULL);
	*tab = 0;
	ft_strcat(tab, strs[0]);
	while (i <= size - 1)
	{
		ft_strcat(tab, sep);
		ft_strcat(tab, strs[i]);
		i++;
	}
	return (tab);
}
