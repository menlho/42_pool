/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:37:47 by momascle          #+#    #+#             */
/*   Updated: 2023/02/19 21:55:57 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strdup(char *str);
int	ft_strlen(char *str);

int main(void)
{	
	char *cpy;
	char *original = "MORGAM M ANGIE";
	cpy = ft_strdup(original);

	printf("original	--> %s\n len = %d \n", original, ft_strlen(original));
	printf("copy		--> %s\n len = %d \n", cpy, ft_strlen(cpy));
	return (0);
}
