/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:42:00 by momascle          #+#    #+#             */
/*   Updated: 2023/02/16 21:14:21 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int	ft_recursive_power(int nb, int power);
int	ft_fibonacci(int index);
int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

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
	printf("---------FIBO_RECUR_TESTS----------\n");
	printf("fib(0) : %d \n", ft_fibonacci(0));
	printf("fib(1) : %d \n", ft_fibonacci(1));
	printf("fib(2) : %d \n", ft_fibonacci(2));
	printf("fib(3) : %d \n", ft_fibonacci(3));
	printf("fib(4) : %d \n", ft_fibonacci(4));
	printf("fib(5) : %d \n", ft_fibonacci(5));
	printf("fib(6) : %d \n", ft_fibonacci(6));
	printf("fib(7) : %d \n", ft_fibonacci(7));
	printf("fib(8) : %d \n", ft_fibonacci(8));
	printf("fib(9) : %d \n", ft_fibonacci(9));
	printf("fib(10) : %d \n", ft_fibonacci(10));
	printf("fib(11) : %d \n", ft_fibonacci(11));
	printf("fib(-11) : %d \n", ft_fibonacci(-11));
	printf("---------SQRT_RECUR_TESTS----------\n");
	printf("sqrt(0) : %d \n", ft_sqrt(0));
	printf("sqrt(1) : %d \n", ft_sqrt(1));
	printf("sqrt(2) : %d \n", ft_sqrt(2));
	printf("sqrt(3) : %d \n", ft_sqrt(3));
	printf("sqrt(4) : %d \n", ft_sqrt(4));
	printf("sqrt(5) : %d \n", ft_sqrt(5));
	printf("sqrt(6) : %d \n", ft_sqrt(6));
	printf("sqrt(-7) : %d \n", ft_sqrt(-7));
	printf("sqrt(8) : %d \n", ft_sqrt(8));
	printf("sqrt(9) : %d \n", ft_sqrt(9));
	printf("sqrt(23) : %d \n", ft_sqrt(23));
	printf("sqrt(16) : %d \n", ft_sqrt(16));
	printf("sqrt(32) : %d \n", ft_sqrt(32));
	printf("sqrt(25) : %d \n", ft_sqrt(25));
	printf("sqrt(81) : %d \n", ft_sqrt(81));
	printf("sqrt(100) : %d \n", ft_sqrt(100));
	printf("sqrt(1787569) : %d \n", ft_sqrt(1787569));
	printf("sqrt(2147483646) : %d \n", ft_sqrt(2147483646));
	printf("sqrt(2147483647) : %d \n", ft_sqrt(2147483647));
	printf("sqrt(2147395600) : %d \n", ft_sqrt(2147395600));
	printf("sqrt(-2147483648) : %d \n", ft_sqrt(-2147483648));
	printf("sqrt(2147483647) : %d \n", ft_sqrt(2147483647));
	printf("sqrt(2147395500) : %d \n", ft_sqrt(2147395500));
	printf("sqrt(2147395400) : %d \n", ft_sqrt(2147395400));
	printf("sqrt(2147395300) : %d \n", ft_sqrt(2147395300));
	printf("sqrt(2147395200) : %d \n", ft_sqrt(2147395200));
	printf("sqrt(2147395100) : %d \n", ft_sqrt(2147395100));
	printf("sqrt(2047395507) : %d \n", ft_sqrt(2047395507));
	printf("sqrt(2147302921) : %d \n", ft_sqrt(2147302921));
	printf("sqrt(2147210244) : %d \n", ft_sqrt(2147210244));
	printf("---------IS_PRIME_TESTS----------\n");
	printf(" 1 : %d \n", ft_is_prime(1));
	printf(" 0 : %d \n", ft_is_prime(0));
	printf(" -5 : %d \n", ft_is_prime(-5));
	printf(" 2 : %d \n", ft_is_prime(2));
	printf(" 4 : %d \n", ft_is_prime(4));
	printf(" 23 : %d \n", ft_is_prime(23));
	printf(" 3 : %d \n", ft_is_prime(3));
	printf(" 5 : %d \n", ft_is_prime(5));
	printf(" 7 : %d \n", ft_is_prime(7));
	printf(" 11 : %d \n", ft_is_prime(11));
	printf(" 89 : %d \n", ft_is_prime(89));
	printf(" 97 : %d \n", ft_is_prime(97));
	printf(" 113 : %d \n", ft_is_prime(113));
	printf(" 6 : %d \n", ft_is_prime(6));
	printf(" 8 : %d \n", ft_is_prime(8));
	printf("18 : %d \n", ft_is_prime(18));
	printf("10 : %d \n", ft_is_prime(10));
	printf("---------NEXT_PRIME_TESTS----------\n");
	printf("next prime 2131131135 %d \n", ft_find_next_prime(2131131135));
	printf("next prime -2: %d \n", ft_find_next_prime(-2));
	printf("next prime 0: %d \n", ft_find_next_prime(0));
	printf("next prime 2: %d \n", ft_find_next_prime(2));
	printf("next prime 4: %d \n", ft_find_next_prime(4));
	printf("next prime 125: %d \n", ft_find_next_prime(125));
	printf("next prime 90: %d \n", ft_find_next_prime(90));
	printf("next prime 98: %d \n", ft_find_next_prime(98));
	printf("next prime 1337 : %d \n", ft_find_next_prime(1337));
}
