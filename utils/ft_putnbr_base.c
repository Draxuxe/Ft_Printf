/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:50:40 by lfilloux          #+#    #+#             */
/*   Updated: 2021/11/16 12:29:37 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char *base)
{
	int		size;

	size = 0;
	if (nb >= 0 && nb < 16)
		size += ft_putchar(base[nb]);
	if (nb >= 16)
	{
		size += ft_putnbr_base(nb / 16, base);
		size += ft_putchar(base[nb % 16]);
	}
	return (size);
}
