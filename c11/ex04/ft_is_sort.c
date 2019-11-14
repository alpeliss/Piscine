/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 21:00:43 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/14 21:08:45 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sens;
	int	tmp;

	sens = 0;
	i = 0;
	if (length < 3)
		return (1);
	while (i < length - 1)
	{
		if ((tmp = f(tab[i], tab[i + 1])))
		{
			if (!sens)
				sens = tmp;
			else if (sens * tmp < 0)
				return (0);
		}
		i++;
	}
	return (1);
}
