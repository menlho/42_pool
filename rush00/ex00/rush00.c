/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:41:07 by momascle          #+#    #+#             */
/*   Updated: 2023/02/05 20:44:54 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_firstline(int x1)
{
	int	i;

	i = 1;
	while (i <= x1)
	{
		if ((i == 1) || (i == x1))
			ft_putchar('o');
		if ((i < x1) && (i != 1))
			ft_putchar('-');
		i++;
	}
}

void	ft_middleline(int x3)
{
	int	i;

	i = 1;
	while (i <= x3)
	{
		if ((i == 1) || (i == x3))
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	ft_lastline(int x2)
{
	int	i;

	i = 1;
	while (i <= x2)
	{
		if ((i == 1) || (i == x2))
			ft_putchar('o');
		if ((i < x2) && (i != 1))
			ft_putchar('-');
		i++;
	}
}

void	ft_width(int x, int y2)
{
	int	j;

	j = 1;
	while (j <= y2)
	{
		if (j == 1)
			ft_firstline(x);
		if ((j < y2) && (j != 1))
			ft_middleline(x);
		if ((j == y2) && (j != 1))
			ft_lastline(x);
		j++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	ft_width(x, y);
}
