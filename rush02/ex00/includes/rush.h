/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:38:41 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 20:32:54 by ikryvenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include "unistd.h"
# include "stdlib.h"
# include "sys/stat.h"
# include "sys/types.h"
# include "fcntl.h"
# include "stdio.h"

char	**get_dico(int fd);
int		ft_strlen(char *str);
int		ft_strstr(char *str, char *to_find);
char	**parse_file(char *file);
char	*ft_itoa(int nbr);
int		check_nb(char *nb);
void	print_nb(char *nb, char **dico);
void	*free_dico(char **dico, int j);
char	**make_intern_dico(void);
void	print_unity(char *nb, char **dico, int *i);

#endif
