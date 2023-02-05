/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:43:30 by momascle          #+#    #+#             */
/*   Updated: 2023/02/05 19:26:55 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == ' '))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int	ft_checkinput(char *str1, char *str2)
{
	while (*str1)
	{
		if (!((*str1 >= '0') && (*str1 <= '9'))
			&& (!(*str1 == '+') && !(*str1 == '-')))
			return (1);
		str1++;
	}
	while (*str2)
	{
		if (!((*str2 >= '0') && (*str2 <= '9'))
			&& (!(*str2 == '+') && !(*str2 == '-')))
			return (1);
		str2++;
	}
	return (0);
}

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	char	*arg1;
	char	*arg2;
	int		x_l;
	int		y_c;

	if (argc == 3)
	{
		arg1 = argv[1];
		arg2 = argv[2];
		x_l = ft_atoi(arg1);
		y_c = ft_atoi(arg2);
		if (ft_checkinput(arg1, arg2) == 1)
		{
			write(2, "Tu ne sais pas ecrire correctement un chiffre?", 46);
			return (0);
		}
		if ((x_l < 0) || (y_c < 0))
			write(2, "Entrez des valeurs positives", 28);
		if ((((x_l > 0) && (y_c > 0))) && (ft_checkinput(arg1, arg2) == 0))
			rush(x_l, y_c);
	}
	return (0);
}
