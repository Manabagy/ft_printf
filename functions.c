#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t ft_putunbr(unsigned int nbr)
{
	size_t	len;

	len = 0;
	if (nbr > 9)
	{
		len += ft_putunbr(nbr / 10);
	}
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}

int	ft_puthex(unsigned int n, int uppercase)
{
	char *base;
	int len;

	len = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";

	if (n >= 16)
		len += ft_puthex(n / 16, uppercase);
	ft_putchar(base[n % 16]);
	len++;

	return (len);
}
