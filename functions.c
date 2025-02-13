/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaghda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:19:01 by mabaghda          #+#    #+#             */
/*   Updated: 2025/02/13 18:25:16 by mabaghda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	len_putstr(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	len_putnbr(int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len_putchar((nbr % 10) + '0');
		nbr /= 10;
		len++;
	}
	return (len);
}

int	len_putunbr(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr > 9)
	{
		len += len_putunbr(nbr / 10);
	}
	len += len_putchar(nbr % 10 + '0');
	return (len);
}
