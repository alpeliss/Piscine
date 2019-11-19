/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 18:13:45 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/18 20:27:31 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

#include "sys/stat.h"
#include "sys/types.h"
#include <fcntl.h>
#include "unistd.h"
#include "stdio.h"
#include "errno.h"
#include <string.h>
#include "stdlib.h"

int		ft_strlen(char *str);
char	*ft_strndup(char *src, int n);
int		ft_strcmp(char *sa, char *sb);
void	ft_putnbr_hex(long nb);

#endif
