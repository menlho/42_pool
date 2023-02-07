/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:06:54 by momascle          #+#    #+#             */
/*   Updated: 2023/02/07 01:19:03 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int tester = 0 ;
	int tester2 = 666;
	int div = 0;
	int mod = 0;
	int a = 10;
	int b = 2;

	int *ptr1 = &tester;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	char phrase[] = "Morgan";
	int	numbers[] = {5, 4, 3, 2, 1, 0};

	printf("tests c01\n");
	printf("valeur tester : %d\n", tester);
	ft_ft(&tester);
	printf("valeur tester : %d\n", tester);
	tester = 0;
	printf("valeur tester : %d\n", tester);
	ft_ultimate_ft(ptr9);
	printf("valeur tester : %d\n", tester);
	printf("valeur tester : %d tester2 : %d\n", tester, tester2);
	ft_swap(&tester, &tester2);
	printf("valeur tester : %d tester2 : %d\n", tester, tester2);
	printf("valeur div : %d mod : %d\n", div, mod);
	ft_div_mod(10, 2, &div, &mod);
	printf("valeur div : %d mod : %d\n", div, mod);
	printf("valeur a : %d b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("valeur a/b : %d a mod b : %d\n", a, b);
	ft_putstr(phrase);
	printf("\n");
	printf("longueur de phrase = %d\n", ft_strlen(phrase));
	
	int i = 0;
	while (i < 6)
	{
		printf("%d", numbers[i]);
		i++;
	}
	ft_rev_int_tab(numbers, 6);
	i = 0;
	while (i < 6)
	{
		printf("%d", numbers[i]);
		i++;
	}


	return(0);

}
