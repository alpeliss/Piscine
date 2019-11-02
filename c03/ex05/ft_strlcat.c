/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 14:29:51 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/02 15:47:35 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				dest_len;

	if (!dest || !src)
		return (ft_strlen(dest) + ft_strlen(src));
	dest_len = ft_strlen(dest);
	if (size == 0)
		return (ft_strlen(src));
	if ((int)size < 0)
		size = dest_len + ft_strlen(src) + 1;
	i = 0;
	while (dest_len + i < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	size = ((int)size > dest_len) ? dest_len : size;
	return (size + ft_strlen(src));
}
