/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:10:10 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/16 12:26:29 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_printer(va_list args, char c)
{
	size_t	size;

	size = 0;
	if (c == 'd' || c == 'i')
		size += ft_print_int(va_arg(args, int));
	else if (c == 'c')
		size += ft_print_char(va_arg(args, int));
	else if (c == 's')
		size += ft_print_str(va_arg(args, char *));
	else if (c == 'x')
		size += ft_print_small_hexa(va_arg(args, unsigned int));
	else if (c == 'X')
		size += ft_print_large_hexa(va_arg(args, int));
	else if (c == 'u')
		size += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'p')
		size += ft_print_pointer(va_arg(args, void *));
	else
		return (0);
	return (size);
}
