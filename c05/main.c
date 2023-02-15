/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:42:00 by momascle          #+#    #+#             */
/*   Updated: 2023/02/15 22:19:30 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("---------BEGINNING TESTS----------\n");
	printf("---------FACT_ITER_TESTS----------\n");
	printf("!0 = %d\n", ft_iterative_factorial(0));
	printf("!1 = %d\n", ft_iterative_factorial(1));
	printf("!2 = %d\n", ft_iterative_factorial(2));
	printf("!3 = %d\n", ft_iterative_factorial(3));
	printf("!4 = %d\n", ft_iterative_factorial(4));
	printf("!5 = %d\n", ft_iterative_factorial(5));
	printf("!6 = %d\n", ft_iterative_factorial(6));
	printf("!7 = %d\n", ft_iterative_factorial(7));
	printf("!-1 = %d\n", ft_iterative_factorial(-1));
	printf("!-2 = %d\n", ft_iterative_factorial(-2));
	printf("---------FACT_RECUR_TESTS----------\n");
	printf("!0 = %d\n", ft_recursive_factorial(0));
	printf("!1 = %d\n", ft_recursive_factorial(1));
	printf("!2 = %d\n", ft_recursive_factorial(2));
	printf("!3 = %d\n", ft_recursive_factorial(3));
	printf("!4 = %d\n", ft_recursive_factorial(4));
	printf("!5 = %d\n", ft_recursive_factorial(5));
	printf("!6 = %d\n", ft_recursive_factorial(6));
	printf("!7 = %d\n", ft_recursive_factorial(7));
	printf("!-1 = %d\n", ft_recursive_factorial(-1));
	printf("!-2 = %d\n", ft_recursive_factorial(-2));
	printf("---------POWER_ITER_TESTS----------\n");
	printf("0^0 = %d\n", ft_iterative_power(0, 0));
	printf("1^0 = %d\n", ft_iterative_power(1, 0));
	printf("2^2 = %d\n", ft_iterative_power(2, 2));
	printf("3^1 = %d\n", ft_iterative_power(3, 1));
	printf("4^4 = %d\n", ft_iterative_power(4, 4));
	printf("5^2 = %d\n", ft_iterative_power(5, 2));
	printf("6^2 = %d\n", ft_iterative_power(6, 2));
	printf("7^1 = %d\n", ft_iterative_power(7, 1));
	printf("-1^0 = %d\n", ft_iterative_power(-1, 0));
	printf("-2^-1 = %d\n", ft_iterative_power(-2, -1));
	printf("10^-2 = %d\n", ft_iterative_power(10, -2));
	printf("-10^2 = %d\n", ft_iterative_power(-10, 2));
	printf("-10^3 = %d\n", ft_iterative_power(-10, 3));
	printf("---------POWER_RECUR_TESTS----------\n");
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("1^0 = %d\n", ft_recursive_power(1, 0));
	printf("2^2 = %d\n", ft_recursive_power(2, 2));
	printf("3^1 = %d\n", ft_recursive_power(3, 1));
	printf("4^4 = %d\n", ft_recursive_power(4, 4));
	printf("5^2 = %d\n", ft_recursive_power(5, 2));
	printf("6^2 = %d\n", ft_recursive_power(6, 2));
	printf("7^1 = %d\n", ft_recursive_power(7, 1));
	printf("-1^0 = %d\n", ft_recursive_power(-1, 0));
	printf("-2^-1 = %d\n", ft_recursive_power(-2, -1));
	printf("10^-2 = %d\n", ft_recursive_power(10, -2));
	printf("-10^2 = %d\n", ft_recursive_power(-10, 2));
	printf("-10^3 = %d\n", ft_recursive_power(-10, 3));
}
