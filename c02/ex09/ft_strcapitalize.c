/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:09:32 by momascle          #+#    #+#             */
/*   Updated: 2023/02/11 20:33:35 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_letter(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	is_delimiter(char c)
{
	if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96)
		|| (c >= 123 && c >= 127))
		return (1);
	else
		return (0);
}

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
	int	i;

	i = 0;
	ft_lowerit(str);
	if (is_letter(str[0]) == 1)
	{
			str[0] -= 32;
			i++;
	}
	while (str[i])
	{
		if (is_letter(str[i]) && (is_delimiter(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
