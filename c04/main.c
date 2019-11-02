/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 16:04:57 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 16:39:35 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "unistd.h"

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

int		main(void)
{
	/** Ex00 ft_strlen **/
	printf("%d  %d  %d\n", ft_strlen(NULL), ft_strlen(""), ft_strlen("0123456789"));
	printf("%lu  %lu\n\n", strlen(""), strlen("0123456789"));

	/** Ex01 ft_putstr **/
	ft_putstr(NULL);
	ft_putstr("");
	ft_putstr("0123456789\n\n");

	/** Ex02 ft_putnbr **/
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
	write(1, "\n\n", 2);

	/** Ex03 ft_atoi **/
	printf("%d %d %d \n", ft_atoi(" ---+--+1234ab567"), ft_atoi("-2147483648"), ft_atoi("2147483647"));
}
