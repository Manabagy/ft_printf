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
		len += ft_putchar('%');
	else if (*str == 'p')
		len += ft_putptr(va_arg(args, unsigned int));
	return (len);

}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		len;

	va_start(args, format);

	len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += check_format(format++, args);
		}
		else
		{
			len += ft_putchar(format);
			format++;
		}
	}
	va_end(args);
	return (len);

}