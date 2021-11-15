/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:07:50 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/19 10:02:18 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		 return (-1);
	 if (index == 0)
		 return (0);
	 if (index == 1)
		 return (1);
	 return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
