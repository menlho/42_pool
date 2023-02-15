/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 06:42:38 by momascle          #+#    #+#             */
/*   Updated: 2023/02/15 18:32:24 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);
char	ft_putstr(char *str);
void	ft_putnbr(int nb);
int	ft_atoi(char *str);



int	main(void)
{
	printf("---------	RUNNING TESTS	----------\n");
	printf("---------	TEST STRLEN		----------\n");
	printf("len coucou	 : %d\n", ft_strlen("coucou"));
	printf("len vide	 : %d\n", ft_strlen(""));
	printf("---------	putstr	 ----------\n");
	ft_putstr("coucou\n");
	ft_putstr("\n");
	ft_putstr("Ca va Hatem ?\n");
	printf("---------	putnbr	 ----------\n");
	ft_putnbr(150);
   	ft_putstr("\n");
	ft_putnbr(-150);
	ft_putstr("\n");
	ft_putnbr(-2147483648);
	ft_putstr("\n");
	ft_putnbr(666);
	ft_putstr("\n");
	printf("---------	atoi LOVE ----------\n");
	printf("2540 --> %d\n", ft_atoi("2540"));
	printf("-2540 --> %d\n", ft_atoi("-2540"));
	printf("-2540 --> %d\n", ft_atoi("-----------2540"));
	printf("25 --> %d\n", ft_atoi("++-+-+-+---+25def40"));
	printf("+2147483647 fake --> %d\n", ft_atoi("++2147483647"));
	printf("+2147483647 real --> %d\n", atoi("++2147483647"));
	printf("-2147483648 --> %d\n", ft_atoi("-+2147483648"));
	printf("-2147483649 fake --> %d\n", ft_atoi("-+2147483649"));
	printf("-2147483649 real --> %d\n", atoi("-+2147483649"));
	printf("-214748 fake--> %d\n", ft_atoi("-------------+214748"));
	printf("-214748 real--> %d\n", atoi("-------------+214748"));
	
}
