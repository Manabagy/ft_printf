#include "ft_printf.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
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

