/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:48:54 by momascle          #+#    #+#             */
/*   Updated: 2023/02/15 13:45:39 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	if (!(to_find[a]))
		return (str);
	while (str[a] != '\0')
	{
		if (str[a] == to_find[b])
		{
			c = a;
			while ((str[c] == to_find[b]) && (to_find[b] != '\0'))
			{
				b++;
				c++;
			}
			if (to_find [b] == '\0')
				return (str + a);
			b = 0;
		}
		a++;
	}
	return (0);
}
