/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scdubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:52:47 by scdubois          #+#    #+#             */
/*   Updated: 2023/02/19 19:36:23 by scdubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

char	*inttochar(unsigned int nbr, int i, char *str)
{
	if (nbr >= 0 && nbr <= 9)
		str[i] = nbr + 48;
	else if (nbr > 9)
	{
		inttochar(nbr / 10, i - 1, str);
		inttochar(nbr % 10, i, str);
		str[i + 1] = '\0';
		return (str);
	}
	return (str);
}

void	ft_dico_3(char *dico, int *i, int *k, int *l)
{
	while (dico[*i - 1] != ':' && dico[*i] != '\n')
		*i += 1;
	while (dico[*i] < 33 || dico[*i] > 126)
		*i += 1;
	*k = *i;
	*l = 0;
	while (dico[*i] != '\n')
	{
		*i += 1;
		*l += 1;
	}
	*i = *k;
}

void	ft_dico_2(char *dico, char *tofind, int *i, int *j)
{
	int	m;

	while (dico[*i])
	{
		*j = 0;
		m = *i;
		while (dico[*i] == tofind[*j])
		{
			*j += 1;
			*i += 1;
		}
		if (tofind[*j] == '\0' && (dico[m - 1] == '\n' || dico[m - 1] == '\0'))
		{
			if (dico[*i] == ':' || dico[*i] == ' ')
				break ;
		}
		*i += 1;
	}
}

char	*ft_dico(unsigned int nbr, char *dico, int i, int j)
{
	int		k;
	int		l;
	char	*tofind;
	char	*toput;
	char	*str;

	tofind = malloc(sizeofnbr(nbr));
	tofind = inttochar(nbr, sizeofnbr(nbr) - 1, tofind);
	ft_dico_2(dico, tofind, &i, &j);
	if (tofind[j] != '\0')
	{
		toput = malloc(1);
		return (toput);
	}
	ft_dico_3(dico, &i, &k, &l);
	toput = malloc(l + 1);
	l = 0;
	while (dico[i] != '\n')
	{
		toput[l] = dico[i];
		l += 1;
		i += 1;
	}
	toput[l] = '\0';
	return (toput);
}
