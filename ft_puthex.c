/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbouarfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:35:03 by kbouarfa          #+#    #+#             */
/*   Updated: 2024/11/27 04:37:35 by kbouarfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_baselen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_puthex(unsigned long long n, int flag)
{
	char	*base;
	char	list[50];
	int		len;
	char	*ptr;

	if (flag == 0)
		base = "0123456789abcdef";
	else if (flag == 1)
		base = "0123456789ABCDEF";
	else if (flag == 2)
		base = "0123456789";
	len = ft_baselen(base);
	ptr = &list[49];
	*ptr = '\0';
	if (n == 0)
	{
		*--ptr = base[0];
		return (ft_putstr(ptr));
	}
	while (n)
	{
		*--ptr = base[n % len];
		n = n / len;
	}
	return (ft_putstr(ptr));
}

int	ft_putpoi(void *ptr)
{
	int					counter;
	unsigned long long	p;

	if (ptr == NULL)
	{
		return (ft_putstr("(nil)"));
	}
	else
	{
		p = (unsigned long long)ptr;
		counter = 0;
		counter += ft_putstr("0x");
		counter += ft_puthex(p, 0);
	}
	return (counter);
}
