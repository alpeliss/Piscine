/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_intern_dico.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alpeliss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:57:30 by alpeliss          #+#    #+#             */
/*   Updated: 2019/11/16 19:10:53 by alpeliss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	first_part(char **dico)
{
	dico[0] = "zero";
	dico[1] = "one";
	dico[2] = "two";
	dico[3] = "three";
	dico[4] = "four";
	dico[5] = "five";
	dico[6] = "six";
	dico[7] = "seven";
	dico[8] = "eight";
	dico[9] = "nine";
	dico[10] = "ten";
	dico[11] = "eleven";
	dico[12] = "twelve";
	dico[13] = "thirteen";
	dico[14] = "fourteen";
	dico[15] = "fifteen";
	dico[16] = "sixteen";
	dico[17] = "seventeen";
	dico[18] = "eighteen";
	dico[19] = "nineteen";
	dico[20] = "twenty";
}

void	second_part(char **dico)
{
	dico[21] = "thirty";
	dico[22] = "fourty";
	dico[23] = "fifty";
	dico[24] = "sixty";
	dico[25] = "seventy";
	dico[26] = "eighty";
	dico[27] = "ninety";
	dico[28] = "hundred";
	dico[29] = "thousand";
	dico[30] = "million";
	dico[31] = "billion";
	dico[32] = "trillion";
	dico[33] = "quadrillon";
	dico[34] = "quintillion";
	dico[35] = "sextillion";
	dico[36] = "septillion";
	dico[37] = "octillion";
	dico[38] = "nonillion";
	dico[39] = "decillion";
	dico[40] = "undecillion";
	dico[41] = NULL;
}

char	**make_intern_dico(void)
{
	char	**dico;

	dico = (char **)malloc(42 * sizeof(char *));
	first_part(dico);
	second_part(dico);
	return (dico);
}
