/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:09:32 by momascle          #+#    #+#             */
/*   Updated: 2023/02/09 23:02:04 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_lowerit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_lowerit(str);
	while(str[i])
	{
		if (is_space(str[i] == 1))
			i++;
	}
	return (str);
}
