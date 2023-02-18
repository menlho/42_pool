/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:36:28 by momascle          #+#    #+#             */
/*   Updated: 2023/02/17 20:32:07 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	absolute(int nb)
{
	if (nb < 0)
		nb = -nb;
	if (nb > 0)
		return (nb);
	return (0);
}
int	tab_len(int start, int end)
{
	return (absolute(start - end) + 1);
}
int	*ft_range(int start, int end)
{
	int size = tab_len(start, end);
	int i = 0;
	int j ;
	int *tab;
	j = start;

	if (!(tab = (int *)malloc(size * sizeof(int))))
	{
	//	printf("error malloc");
		return (0);
	}
	if (start == end)
	{
		tab[0] = start;
	//	printf("tab[i] = %d et i = %d et j = %d | \n", tab[i], i, j);
	}
	if (start < end)
	{
		j = start;
		while (i < size)
		{
			tab[i] = j;
	//		printf("tab[i] = %d et i = %d et j = %d | \n", tab[i], i, j);
			i++;
			j++;
		}
	}
	if (start > end)
	{
		j = start;
		while (i < size)
		{
			tab[i] = j;
	//		printf("tab[i] = %d et i = %d et j = %d | \n", tab[i], i, j);
			i++;
			j--;
		}
	}
	return (tab);

}
int main(void)
{
	int a = 1;
	int b = 1;
	int i = 0;
	int *tab = ft_range(a,b);
	int size;
	size = tab_len(a,b);

	while (i < size)
	{
		printf("[%d:%d] , ", i, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}
