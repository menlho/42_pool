/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:03:59 by momascle          #+#    #+#             */
/*   Updated: 2023/02/24 08:52:19 by momascle         ###   ########.fr       */
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
	return (nb);
}

int	sizetab(int min, int max)
{
	if (min >= max)
		return (0);
	return (absolute(max - min));
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = sizetab(min, max);
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (i < size)
	{
		*(*(range) + i) = min + i;
		i++;
	}
	return (i);
}

/*int main(void)
{
	int min = 10;
	int max = 100;
	int i = 0;
	int	*array;
	
	int size = sizetab(min, max);
	printf("size of range : %d \n", ft_range(&array, min, max));
	while (i < size)
	{
		printf("%d:%d \n", i, *(array + i));
		i++;
	}
	printf("adress of array ----> %p\n", array);
return(0);
}*/
