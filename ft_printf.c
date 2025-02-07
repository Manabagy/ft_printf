int	ft_printf(const char *format, ...)
{
	int a;

	a = 0;
	while (format[a] != '\0')
	{
		if (format[a] == '%')
		{
			if (format[a + 1] == d);
		}
		write(1, &format[a], 1);
		a++;
	}
}