/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:13:03 by momascle          #+#    #+#             */
/*   Updated: 2023/02/09 16:16:13 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapel(int *el1, int *el2)
{
	int	temp;

	temp = *el1;
	*el1 = *el2;
	*el2 = temp;
}

int	ft_partition(int *tab, int low, int high)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[high];
	i = low - 1;
	j = low;
	while (j < high)
	{
		if (tab[j] <= pivot)
		{
			i++;
			ft_swapel(&tab[i], &tab[j]);
		}
		j++;
	}
	ft_swapel(&tab[i + 1], &tab[high]);
	return (i + 1);
}

void	ft_quicksort(int *tab, int low, int high)
{
	int	pi;

	pi = ft_partition(tab, low, high);
	if (low < high)
	{
		ft_quicksort(tab, low, pi - 1);
		ft_quicksort(tab, pi + 1, high);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	if (size >= 0)
	{
		ft_quicksort(tab, 0, size - 1);
	}
}
