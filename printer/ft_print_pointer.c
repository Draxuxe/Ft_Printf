/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:59:34 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/16 13:50:00 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base_pointer(unsigned long int nb, char *base)
{
	int	size;

	size = 0;
	if (nb >= 0 && nb < 16)
		size += ft_putchar(base[nb]);
	if (nb >= 16)
	{
		size += ft_putnbr_base_pointer(nb / 16, base);
		size += ft_putchar(base[nb % 16]);
	}
	return (size);
}

int	ft_print_pointer(void *a)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_putnbr_base_pointer((unsigned long int)a, "0123456789abcdef");
	return (i);
}
