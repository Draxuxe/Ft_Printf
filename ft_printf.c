/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:49 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/16 13:50:48 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			index;
	size_t		size;
	size_t		result;

	index = 0;
	va_start(args, format);
	size = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			result = ft_printer(args, format[index + 1]);
			if (result == 0 && format[index + 1] != 's')
				size += ft_putchar(format[index + 1]);
			size += result;
			index++;
		}
		else
			size += ft_putchar(format[index]);
		index++;
	}
	va_end(args);
	return (size);
}

/*
#include <limits.h>

int	main(void)
{
	int	i;
	int	j;

	i = printf("%p %p\n", LONG_MIN, LONG_MAX);
	j = ft_printf("%p %p", LONG_MIN, LONG_MAX);
	printf("%d   %d", i - 1, j);
}
*/