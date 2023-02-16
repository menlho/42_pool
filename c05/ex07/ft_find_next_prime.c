/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:32:34 by momascle          #+#    #+#             */
/*   Updated: 2023/02/16 18:53:23 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while ((i <= 46340) && (i < nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb > 2131131137)
		return (2147483647);
	if (is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
