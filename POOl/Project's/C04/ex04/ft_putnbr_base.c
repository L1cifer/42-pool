/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:49:00 by atakeddi          #+#    #+#             */
/*   Updated: 2021/08/15 13:49:40 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print(unsigned int n, char *base, unsigned int size)
{
    if (n > size - 1)
    {
        ft_print(n / size, base, size);
        n = n % size;
    }
    ft_putchar(base[n]);
}
int ft_strlen(char *base)
{
    unsigned int    i;
    i = 0;
    while (base[i])
    {
        i++;
    }
    return (i);
}
unsigned int    check_base(char *base)
{
    int i;
    int z;
    i = 0;
    z = 0;
    if (!base[0] || !base[1])
        return (0);
    while (base[i])
    {
        z = i + 1;
        if (!((base[i] >= '0' && base[i] <= '9') || (base[i] >= 'a'
                && base[i] <= 'z') || (base[i] >= 'A' && base[i] <= 'Z')))
            return (0);
        while (base[z])
        {
            if (base[i] == base[z])
                return (0);
            z++;
        }
        i++;
    }
    return (1);
}
void    ft_putnbr_base(int nbr, char *base)
{
    unsigned int    n;
    unsigned int    size;
    if (!check_base(base))
        return ;
    if (nbr < 0)
    {
        n = -nbr;
        ft_putchar('-');
    }
    else
        n = nbr;
    size = ft_strlen(base);
    ft_print(n, base, size);
}
