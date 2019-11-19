/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:09:49 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/18 11:36:41 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include "unistd.h"
# include "stdlib.h"
# include "sys/stat.h"
# include "sys/types.h"
# include "fcntl.h"

char	*get_line(int fd);
int		ft_strlen(char *str);

#endif
