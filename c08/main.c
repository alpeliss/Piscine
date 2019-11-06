/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 07:03:39 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/06 07:36:17 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04/ft_stock_str.h"
#include "stdio.h"
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void 				ft_show_tab(struct s_stock_str *par);

int main(int ac, char **av)
{
	t_stock_str	*tab;
	
	tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
	return (0);
}
