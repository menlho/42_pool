/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:38:43 by momascle          #+#    #+#             */
/*   Updated: 2023/02/23 16:34:27 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = malloc(sizeof(char) * i + 1);
	if (!copy)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dest;
	int			i;

	dest = malloc(sizeof(t_stock_str) *(ac + 1));
	if (!dest)
		return (0);
	i = 0;
	while (i < ac)
	{
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = av[i];
		dest[i].copy = ft_strdup(av[i]);
		i++;
	}
	dest[i].str = 0;
	return (dest);
}
/*int	main()
{
	char *tab[] = {
	};
	t_stock_str	*mystruct;
	mystruct = ft_strs_to_tab(-1, NULL);
	
	int i = 0;
	while(mystruct[i].str)
	{
		printf("%s\n", mystruct[i].str);
		printf("%s\n", mystruct[i].copy);
		printf("%d\n", mystruct[i].size);
		i++;
	}
	system("leaks a.out");
	return(0);
}*/
