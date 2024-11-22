#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
void	ft_print_p(unsigned long p, int *l);
void ft_print_hexa_upper(unsigned long hexa, int *len, int prefix);
void ft_print_hexa_lower(unsigned long hexa, int *len, int prefix);


#endif

