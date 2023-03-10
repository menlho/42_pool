/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:54:48 by momascle          #+#    #+#             */
/*   Updated: 2023/02/12 18:56:32 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowerstr(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	lowerstr(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	i++;
	}
	return (str);
}
