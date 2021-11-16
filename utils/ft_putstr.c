/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:21:07 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/16 12:01:34 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *s)
{
	int	index;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	index = 0;
	while (s[index])
	{
		index += ft_putchar(s[index]);
	}
	return (index);
}
