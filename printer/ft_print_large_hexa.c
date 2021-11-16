/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_large_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:09:11 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/16 12:27:37 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_large_hexa(unsigned int a)
{
	return (ft_putnbr_base(a, "0123456789ABCDEF"));
}
