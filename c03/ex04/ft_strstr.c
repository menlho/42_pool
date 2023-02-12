/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:48:54 by momascle          #+#    #+#             */
/*   Updated: 2023/02/12 04:41:33 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen_(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen_(to_find) == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((str[i] == to_find[j]) && to_find[j])
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (str + i - j);
		}
		i++;
	}
	return (0);
}
