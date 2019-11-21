/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:08:22 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/19 12:12:45 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include "sys/stat.h"
# include "sys/types.h"
# include <fcntl.h>
# include "unistd.h"
# include "stdio.h"
# include "errno.h"
# include "string.h"

void	print_line(void);
int		ft_strlen(char *str);

#endif
