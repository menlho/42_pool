/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scdubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:52:42 by scdubois          #+#    #+#             */
/*   Updated: 2023/02/19 19:35:14 by scdubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	ft_putnbr_2(unsigned int nbr, char *dico)
{
	if (nbr / 100 != 0)
	{
		if (ft_dico(nbr / 100, dico, 0, 0)[0] == '\0')
			return (0);
		if (ft_dico(100, dico, 0, 0)[0] == '\0')
			return (0);
		nbr = nbr % 100;
	}
	if (nbr >= 11 && nbr <= 19)
	{
		if (ft_dico(nbr, dico, 0, 0)[0] == '\0')
			return (0);
		return (1);
	}
	if (nbr / 10 != 0)
	{
		if (ft_dico(((nbr / 10) * 10), dico, 0, 0)[0] == '\0')
			return (0);
		nbr = nbr % 10;
	}
	if (nbr != 0)
		if (ft_dico(nbr, dico, 0, 0)[0] == '\0')
			return (0);
	return (1);
}

int	ft_putnbr(unsigned int nbr, char *dico)
{
	if (nbr / 100 != 0)
	{
		ft_putstr(ft_dico(nbr / 100, dico, 0, 0));
		ft_space(nbr);
		ft_putstr(ft_dico(100, dico, 0, 0));
		nbr = nbr % 100;
		ft_space(nbr);
	}
	if (nbr >= 11 && nbr <= 19)
	{
		ft_putstr(ft_dico(nbr, dico, 0, 0));
		return (1);
	}
	if (nbr / 10 != 0)
	{
		ft_putstr(ft_dico(((nbr / 10) * 10), dico, 0, 0));
		if (nbr % 10 != 0)
			ft_putstr("-");
		nbr = nbr % 10;
		if (nbr == 0)
			ft_space(nbr);
	}
	if (nbr != 0)
		ft_putstr(ft_dico(nbr, dico, 0, 0));
	return (1);
}

int	rush02_2(unsigned int nbr, char *dico)
{
	if (nbr / 1000000 != 0)
	{
		ft_putnbr(nbr / 1000000, dico);
		ft_space(nbr);
		ft_putstr(ft_dico(1000000, dico, 0, 0));
		nbr = nbr % 1000000;
		ft_space(nbr);
	}
	if (nbr / 1000 != 0)
	{
		ft_putnbr(nbr / 1000, dico);
		ft_space(nbr);
		ft_putstr(ft_dico(1000, dico, 0, 0));
		nbr = nbr % 1000;
		ft_space(nbr);
	}
	ft_putnbr(nbr, dico);
	return (0);
}

int	rush02(unsigned int nbr, char *dico)
{
	if (nbr == 0)
	{
		ft_putstr(ft_dico(0, dico, 0, 0));
		ft_putstr("\n");
		return (0);
	}
	if (nbr / 1000000000 != 0)
	{
		ft_putnbr(nbr / 1000000000, dico);
		ft_space(nbr);
		ft_putstr(ft_dico(1000000000, dico, 0, 0));
		nbr = nbr % 1000000000;
		ft_space(nbr);
	}
	rush02_2(nbr, dico);
	ft_putstr("\n");
	return (0);
}

unsigned int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		return (-1);
	if (str[i] == '+')
		i++;
	if (str[i] < '0' || str[i] > '9')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (nb);
}
