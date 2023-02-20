/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scdubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:51:38 by scdubois          #+#    #+#             */
/*   Updated: 2023/02/19 16:51:41 by scdubois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	ft_puterror(int nb)
{
	if (nb == 0)
		write(1, "Error\n", 6);
	else if (nb == 1)
		write(1, "Dict Error\n", 11);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_check(int argc, char **argv)
{
	(void)argv;
	if (argc > 3 || argc == 1)
		return (0);
	if (argc == 2)
		return (1);
	if (argc == 3)
		return (2);
	return (0);
}

int	sizeofnbr(unsigned int nbr)
{
	int		i;

	i = 1;
	while (nbr / 10 != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

void	ft_space(unsigned int nbr)
{
	if (nbr != 0)
		ft_putstr(" ");
}
