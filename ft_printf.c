/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaghda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:19:03 by mabaghda          #+#    #+#             */
/*   Updated: 2025/02/13 18:25:31 by mabaghda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char str, va_list args)
{
	int	len;

	len = 0;
	if (str == 'c')
		len += len_putchar(va_arg(args, int));
	else if (str == 's')
		len += len_putstr(va_arg(args, char *));
	else if (str == 'p')
		len += len_putptr(va_arg(args, unsigned int));
	else if (str == 'd')
		len += len_putnbr(va_arg(args, int));
	else if (str == 'i')
		len += len_putnbr(va_arg(args, int));
	else if (str == 'u')
		len += len_putunbr(va_arg(args, unsigned int));
	else if (str == 'x')
		len += len_puthex(va_arg(args, unsigned int), 0);
	else if (str == 'X')
		len += len_puthex(va_arg(args, unsigned int), 1);
	else if (str == '%')
		len += len_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	len = 0;
	 			i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += check_format(format[i + 1], args);
			i++;
		}
		else
		{
			len += len_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

int	main ()
{
	ft_printf("The num is: %d", 12);
	return (0);
}
