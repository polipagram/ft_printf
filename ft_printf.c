#include"ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	while(format[i])
	{
		if (format[i] == '%')
		i++;
		if (format[i] == 'c')
		ft_putchar(va_arg(args, int));
		else if (format[i] == 's')
		ft_putstr(va_arg(args, char *));
		else if (format[i] == 'd' || format[i] == 'i')
		ft_putnbr(va_arg(args, int));
		else if (format[i] == 'x' || format[i] == 'X')

	}