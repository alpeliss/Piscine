/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:06:00 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/03 13:17:47 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_nb;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	fact_nb = 1;
	while (nb)
	{
		fact_nb *= nb;
		nb--;
	}
	return (fact_nb);
}
