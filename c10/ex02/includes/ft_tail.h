/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 12:29:19 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/19 12:29:37 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include "sys/stat.h"
# include "sys/types.h"
# include <fcntl.h>
# include "unistd.h"
# include "stdio.h"
# include "errno.h"
# include <string.h>
# include "stdlib.h"

int	ft_strlen(char *str);
int	ft_atoi(char *str);
int	ft_strcmp(char *sa, char *sb);

#endif
