/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 11:09:49 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/20 17:00:22 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include "unistd.h"
# include "stdlib.h"
# include "sys/stat.h"
# include "sys/types.h"
# include "fcntl.h"
# include "stdio.h"

typedef struct			s_map
{
	char		plein;
	char		vide;
	char		obstacle;
	int			line_nbr;
	int			line_size;
	char		**tab;
}						t_map;

typedef struct			s_square
{
	int		pos_x;
	int		pos_y;
	int		size;
}						t_square;

char					*get_line(int fd);
int						ft_strlen(char *str);
int						make_tab(int fd, t_map *map);
int						free_tab(char **tab, int i, int err);
void					resolv(t_map *map);
int						ft_atoi(char *str, int j);
t_map					*first_line(char *str);
void					*ft_error(void);
int						ft_int_error(void);
char					*get_full_line(int fd, int size);

#endif
