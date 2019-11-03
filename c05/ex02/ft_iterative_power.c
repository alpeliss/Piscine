/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 13:18:25 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/03 13:20:05 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_pow;

	if (power < 0)
		return (0);
	nb_pow = 1;
	while (power)
	{
		nb_pow *= nb;
		power--;
	}
	return (nb_pow);
}
