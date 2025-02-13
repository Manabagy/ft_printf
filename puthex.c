/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaghda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:39:58 by mabaghda          #+#    #+#             */
/*   Updated: 2025/02/13 16:55:26 by mabaghda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_puthex(unsigned int n, int uppercase)
{
	char	*base;
	int		len;

	len = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		len += len_puthex(n / 16, uppercase);
	len_putchar(base[n % 16]);
	len++;
	return (len);
}

int	len_putptr(unsigned int n)
{
	int	len;

	len = 0;
	if (!n)
	{
		len += len_putstr("0x0");
		return (len);
	}
	len += len_putstr("0x");
	len += len_puthex(n, 0);
	return (len);
}
