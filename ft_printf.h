/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaghda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:18:57 by mabaghda          #+#    #+#             */
/*   Updated: 2025/02/13 16:56:07 by mabaghda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	len_putchar(char c);
int	len_putunbr(unsigned int nbr);
int	len_puthex(unsigned int n, int uppercase);
int	len_putptr(unsigned int n);
int	len_putstr(char *str);
int	len_putnbr(int nbr);

#endif
