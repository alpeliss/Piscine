/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_full_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 21:11:44 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 16:54:17 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*get_full_line(int fd, int size)
{
	char	*line;

	if (!(line = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	read(fd, line, size);
	line[size] = '\0';
	return (line);
}
