#include "ft_printf.h"

int	check_format(const char *str, args)
{
	size_t	len;

	len = 0;
	if (str == 'c')
		len += ft_putchar(va_args(args, char));
	else if (str == 's')
		len += ft_putstr(va_args(args, char * ));
	else if (str == 'd')
		len += ft_putnbr(va_args(args, int));
	else if (str == 'i')
		len += ft_putnbr(va_args(args, int));
	else if (str == 'u')
		len += ft_putunbr(va_args(args, unsigned int));
	else if (str == 'x')
		len +=

}

int	ft_printf(const char *format, ...)
{
	va_list args;
	int		a;
	va_list *res;

	va_start(args, format);

	a = 0;
	while (format[a] != '\0')
	{
		if (format[a] == '%')
		{
			if (format[a + 1] == 'd')
			{
				va_args(args, int);
				va_copy(&res, &format);
			}
		}
		write(1, &format[a], 1);
		a++;
	}
}