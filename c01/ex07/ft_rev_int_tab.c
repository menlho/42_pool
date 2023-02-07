/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 00:54:25 by momascle          #+#    #+#             */
/*   Updated: 2023/02/07 01:18:37 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_swap_el(int *a, int* b)
{
	int	temp;

	temp =  *a;
	*a = *b;
	*b = temp;
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int temp;

	i = 0;
	j = size;

	while (i < (size/2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
