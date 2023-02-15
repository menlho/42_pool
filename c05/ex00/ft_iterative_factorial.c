/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:42:14 by momascle          #+#    #+#             */
/*   Updated: 2023/02/15 19:09:15 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	mult;
	int	res;

	mult = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (mult <= nb)
	{
		res *= mult;
		mult++;
	}
	return (res);
}
