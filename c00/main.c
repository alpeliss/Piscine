/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:55:40 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/01 12:25:29 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_print_combn(int n);

int		main(void)
{
	ft_putchar(42);
	write(1, "\n", 1);
	ft_print_alphabet();
	write(1, "\n", 1);
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	ft_print_numbers();
	write(1, "\n", 1);
	ft_is_negative(4);
	ft_is_negative(-5);
	ft_is_negative(0);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_comb();
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_print_comb2();
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\t", 1);
	ft_putnbr(2147483647);
	write(1, "\t", 1);
	ft_putnbr(0);
	write(1, "\t", 1);
	ft_putnbr(42);
	write(1, "\t", 1);
	ft_putnbr(-42);
	write(1, "\t", 1);
	ft_putnbr(19);
	write(1, "\t", 1);
	ft_putnbr(-19);
	write(1, "\n", 1);
	ft_print_combn(7);
	return (0);
}
