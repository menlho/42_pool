/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:09:28 by momascle          #+#    #+#             */
/*   Updated: 2023/02/03 12:47:24 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	my_putnbr(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print(int a, int b)
{
	my_putnbr(a / 10 + '0', a % 10 + '0');
	write(1, " ", 1);
	my_putnbr(b / 10 + '0', b % 10 + '0');
	if (a != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
