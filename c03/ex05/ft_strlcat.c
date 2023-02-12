/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:04:55 by momascle          #+#    #+#             */
/*   Updated: 2023/02/12 06:21:00 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	n;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	n = j - 1;

	if ((size == 0) || (size < i))
		return (i + j);
	if (!*src)
		return (i);
	j = 0;
	while (src[j] && (i + j < n))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (size - ft_strlen(dest) - 1);
}
