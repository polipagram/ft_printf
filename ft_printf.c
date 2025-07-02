/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbouarfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:34:40 by kbouarfa          #+#    #+#             */
/*   Updated: 2024/11/27 04:34:50 by kbouarfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 1));
	else if (c == 'u')
		return (ft_puthex(va_arg(args, unsigned int), 2));
	else if (c == 'p')
		return (ft_putpoi(va_arg(args, void *)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			count += handle(format[++i], args);
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main(void) {
	int num = -42;
	unsigned int u_num = 42;
	char *str = "Hello, world!";
	char c = 'A';
	void *ptr = &num;

	ft_printf("Character: %c\n", c);
		ft_printf("\n");
	ft_printf("String: %s\n", str);
		ft_printf("\n");
	ft_printf("Integer (d): %d\n", num);
		ft_printf("\n");
	ft_printf("Integer (i): %i\n", num);
		ft_printf("\n");
	ft_printf("Unsigned Integer (u): %u \n", u_num);
	printf("Unsigned Integer (u): %u \n", u_num);
	printf("\n");
	ft_printf("1Hexadecimal (x): %x \n", u_num);
	printf("2Hexadecimal (x): %x\n", u_num);
	printf("\n");
	ft_printf("1Hexadecimal (X): %X \n", u_num);
	printf("2Hexadecimal (X): %X\n", u_num);
		ft_printf("\n");
	ft_printf("1Pointer /(p): %p \n", ptr);
	printf("2Pointer (p)/: %p \n", ptr);
		ft_printf("\n");
	ft_printf("Percent sign: %%\n");
	printf("Percent sign: %% \n");
		ft_printf("\n");
		printf("jello %");
		ft_printf("\n");
		ft_printf("kdksjkf %");
		ft_printf("\n");
	return (0);
}*/
