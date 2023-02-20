/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scdubois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:51:27 by scdubois          #+#    #+#             */
/*   Updated: 2023/02/20 17:05:44 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int	dicocheck_2(unsigned int nbr, char *dico)
{
	if (nbr / 1000000 != 0)
	{
		if (ft_putnbr_2(nbr / 1000000, dico) == 0)
			return (0);
		if (ft_dico(1000000, dico, 0, 0)[0] == '\0')
			return (0);
		nbr = nbr % 1000000;
	}
	if (nbr / 1000 != 0)
	{
		if (ft_putnbr_2(nbr / 1000, dico) == 0)
			return (0);
		if (ft_dico(1000, dico, 0, 0)[0] == '\0')
			return (0);
		nbr = nbr % 1000;
	}
	if (ft_putnbr_2(nbr, dico) == 0)
		return (0);
	return (1);
}

int	dicocheck(unsigned int nbr, char *dico)
{
	if (nbr == 0)
	{
		if (ft_dico(0, dico, 0, 0)[0] == '\0')
		{
			free(ft_dico(0, dico, 0, 0));
			return (0);
		}
		return (1);
	}
	if (nbr / 1000000000 != 0)
	{
		if (ft_putnbr_2(nbr / 1000000000, dico) == 0)
			return (0);
		if (ft_dico(1000000000, dico, 0, 0)[0] == '\0')
			return (0);
		nbr = nbr % 1000000000;
	}
	if (dicocheck_2(nbr, dico) == 0)
		return (0);
	return (1);
}

int	main_2(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*dico;

	dico = (char *)malloc(10000 * sizeof(char));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1 || ft_atoi(argv[2]) == -1)
	{
		free(dico);
		return (ft_puterror(0));
	}
	size = read(fd, dico, 1000);
	if (dicocheck(ft_atoi(argv[2]), dico) == 1)
		rush02(ft_atoi(argv[2]), dico);
	else
	{
		free(dico);
		return (ft_puterror(1));
	}
	free(dico);
	return (0);
}

int	main_1(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*dico;

	dico = (char *)malloc(10000 * sizeof(char));
	fd = open("dictionnaries/numbers.dict", O_RDONLY);
	if (fd == -1 || ft_atoi(argv[1]) == -1)
	{
		free(dico);
		return (ft_puterror(0));
	}
	size = read(fd, dico, 1000);
	if (dicocheck(ft_atoi(argv[1]), dico) == 1)
		rush02(ft_atoi(argv[1]), dico);
	else
	{
		free(dico);
		return (ft_puterror(1));
	}
	free(dico);
	return (0);
}

int	main(int argc, char **argv)
{
	if (ft_check(argc, argv) == 0)
		return (ft_puterror(0));
	if (ft_check(argc, argv) == 1)
		return (main_1(argc, argv));
	if (ft_check(argc, argv) == 2)
		return (main_2(argc, argv));
	return (0);
}
