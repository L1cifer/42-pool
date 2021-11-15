/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:21:20 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/16 14:27:26 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	n;

	i = 0;
	sign = 1;
	n = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{				
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (sign * n);
}

int	main(void)
{
	printf("%d",ft_atoi(" ---+--+1234ab567"));
	return(0);
}