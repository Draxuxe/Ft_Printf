/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:17:52 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/16 12:15:55 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb >= 10)
	{
		size += ft_putnbr(nb / 10);
		size += ft_putnbr(nb % 10);
	}
	else
	{
		size ++;
		ft_putchar(nb + '0');
	}
	return (size);
}

int	ft_print_unsigned(unsigned int a)
{	
	return (ft_putnbr_unsigned(a));
}
