/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allombar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 03:19:25 by allombar          #+#    #+#             */
/*   Updated: 2019/11/02 14:22:39 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int		ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	total;

	i = 0;
	total = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	m = 1;
	if (str[i] == '-')
	{
		m = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0') * m;
		i++;
	}
	return (total);
}

int		main(int ac, char **av)
{
	int	x;
	int	y;

	x = 2;
	y = 2;
	if (ac >= 3)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[2]);
	}
	rush(x, y);
	return (0);
}
