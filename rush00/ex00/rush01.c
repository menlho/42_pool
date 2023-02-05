/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:45:27 by momascle          #+#    #+#             */
/*   Updated: 2023/02/05 20:55:49 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstline(int x1)
{
	int	a;

	a = 1;
	while (a <= x1)
	{
		if (a == 1)
			ft_putchar(47);
		if ((a == x1) && (x1 != 1))
			ft_putchar(92);
		if ((a > 1) && (a < x1))
			ft_putchar(42);
		a++;
	}
}

void	ft_midline(int x2)
{
	int	a;

	a = 1;
	while (a <= x2)
	{
		if ((a > 1) && (a < x2))
			ft_putchar(' ');
		else
			ft_putchar('*');
		a++;
	}
}

void	ft_lastline(int x3)
{
	int	a;

	a = 1;
	while (a <= x3)
	{
		if (a == 1)
			ft_putchar(92);
		if ((a == x3) && (x3 != 1))
			ft_putchar(47);
		if ((a > 1) && (a < x3))
			ft_putchar(42);
		a++;
	}
}

void	rush(int x, int y)
{
	int	c;

	c = 1;
	while (c <= y)
	{
		if (c == 1)
			ft_firstline(x);
		if ((c == y) && (c != 1))
			ft_lastline(x);
		if ((c > 1) && (c < y))
			ft_midline(x);
		write(1, "\n", 1);
		c++;
	}
}
