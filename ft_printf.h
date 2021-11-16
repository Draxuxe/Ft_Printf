/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:59:47 by rblondia          #+#    #+#             */
/*   Updated: 2021/11/16 12:31:05 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
 * Includes 
 */
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

/*
 * Printer
 */
int		ft_print_int(int value);
int		ft_print_char(int c);
int		ft_print_str(char *a);
int		ft_print_small_hexa(unsigned int a);
int		ft_print_large_hexa(unsigned int a);
int		ft_print_unsigned(unsigned int a);
size_t	ft_printer(va_list args, char c);
int		ft_print_pointer(void *a);

/*
 * Utils 
 */
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		ft_putnbr_base(unsigned int nb, char *base);

/*
 * Main 
 */
int		ft_printf(const char *a, ...)__attribute__((format(printf, 1, 2)));

#endif