#include"ft_printf.h"
int ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_putnbr(int nb)
{
	long n = nb;
	if(n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if(n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
	ft_putchar('\n');
}
int main ()
{
	ft_putnbr(5);
	return (0);
}

	