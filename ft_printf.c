#include "ft_printf.h"

int	check_format(const char *str, args)
{
	size_t	len;

	len = 0;
	if (*str == 'c')
		len += ft_putchar(va_arg(args, char));
	else if (*str == 's')
		len += ft_putstr(va_arg(args, char * ));
	else if (*str == 'd')
		len += ft_putnbr(va_arg(args, int));
	else if (*str == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (*str == 'u')
		len += ft_putunbr(va_arg(args, unsigned int));
	else if (*str == 'x')
		len += ft_puthex(va_arg(args, unsigned int), 0);
	else if (*str == 'X')
		len += ft_puthex(va_arg(args, unsigned int), 1);
	else if (*str == '%')
		len += byte_putchar('%');

}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		count;

	va_start(args, format);

	const = 0;
	while (format[a] != '\0')
	{
		if (format[a] == '%')
		{
			str++;
			count += check_format(str++, args);
		}
		else
		{
			count += ft_putchar(format);
			str++;
		}
		a++;
	}
	va_end(args);
	return (count);

}