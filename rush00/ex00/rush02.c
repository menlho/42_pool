/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:46:40 by momascle          #+#    #+#             */
/*   Updated: 2023/02/05 21:17:59 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstline(int x1)
{
	int	i;

	i = 1;
	while (i <= x1)
	{
		if (i == 1)
			ft_putchar('A');
		if ((i == x1) && (i != 1) && (x1 != 1))
			ft_putchar('A');
		if ((i > 1) && (i < x1))
			ft_putchar('B');
		i++;
	}
}

void	ft_lastline(int x2)
{
	int	i;

	i = 1;
	while (i <= x2)
	{
		if (i == 1)
			ft_putchar('C');
		if ((i == x2) && (x2 != 1))
			ft_putchar('C');
		if ((i > 1) && (i < x2))
			ft_putchar('B');
		i++;
	}
}

void	ft_midline(int x3)
{	
	int	i;

	i = 1;
	while (i <= x3)
	{
		if ((i > 1) && (i < x3))
			ft_putchar(' ');
		else
			ft_putchar('B');
		i++;
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	while (j <= y)
	{
		if (j == 1)
			ft_firstline(x);
		if ((j == y) && (y != 1))
			ft_lastline(x);
		if ((j > 1) && (j < y))
			ft_midline(x);
		j++;
		ft_putchar('\n');
	}
}
