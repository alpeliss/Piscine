/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:05:25 by alpeliss          #+#    #+#             */
/*   Updated: 2019/10/31 18:47:59 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_small(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		is_big(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_al_num(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (!str)
		return (str);
	if (is_small(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (is_small(str[i]) && !(is_al_num(str[i - 1])))
			str[i] -= 32;
		if (is_big(str[i]) && is_al_num(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
