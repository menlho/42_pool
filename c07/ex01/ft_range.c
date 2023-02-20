/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:42:27 by momascle          #+#    #+#             */
/*   Updated: 2023/02/20 19:49:47 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>

int absolute(int nb)
{
	if (nb < 0)
		nb = -nb;
	if (nb > 0)
		return (nb);
	return (nb);
}

int sizetab(int min, int max)
{
	if (min >=  max)
		return (0);
	return (max - min + 1);
}

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	i = 0;
	size = sizetab(min, max);
	array = (int *)malloc(size * sizeof(int));
	if ((size == 0) || (array == NULL))
		return (NULL);
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int main(void)
{
	int min = 0;
	int max = 100;
	int i = 0;
	int	*array;
	int size = sizetab(min, max);
	array = ft_range(min, max);

	while (i < size)
	{
		printf("%d:%d \n", i, *(array + i));
		i++;
	}
	printf("adress of array ----> %p\n", array);
return(0);
}*/
