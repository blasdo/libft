/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:44:27 by bvelasco          #+#    #+#             */
/*   Updated: 2023/09/24 12:27:45 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_put_fd_bridge(char type, va_list *va)
{
	int	nocp;

	nocp = 0;
	if (type == '%')
		ft_putchar_fd('%', ++nocp);
	else if (type == 'c')
		ft_putchar_fd(va_arg(*va, int), ++nocp);
	else if (type == 's')
		nocp += ft_putstr_fd(va_arg(*va, char *), 1);
	else if (type == 'p')
		nocp += ft_putptr_fd(va_arg(*va, void *), 1);
	else if (type == 'd' || type == 'i')
		nocp += ft_putlnbr_base_fd(va_arg(*va, int), DEC, 1);
	else if (type == 'u')
		nocp += ft_putulnbr_base_fd(va_arg(*va, unsigned int), DEC, 1);
	else if (type == 'x')
		nocp += ft_putulnbr_base_fd(va_arg(*va, unsigned int), LOW_HEX, 1);
	else if (type == 'X')
		nocp += ft_putulnbr_base_fd(va_arg(*va, unsigned int), UPP_HEX, 1);
	else
		ft_putchar_fd(type, ++nocp);
	return (nocp);
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		counter;
	va_list	vaargs;

	i = 0;
	counter = 0;
	va_start(vaargs, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			counter += ft_put_fd_bridge(format[++i], &vaargs);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i++], 1);
			counter++;
		}
	}
	va_end(vaargs);
	return (counter);
}
