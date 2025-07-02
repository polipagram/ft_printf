/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbouarfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:35:17 by kbouarfa          #+#    #+#             */
/*   Updated: 2024/11/27 04:35:21 by kbouarfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	size_t	count;

	count = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
	return (count);
}
