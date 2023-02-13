/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:04:55 by momascle          #+#    #+#             */
/*   Updated: 2023/02/13 04:03:48 by momascle         ###   ########.fr       */
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
	unsigned int	lendest;
	unsigned int	lenstr;
	unsigned int	i;

	lendest = ft_strlen(dest);
	lenstr = ft_strlen(src);
	i = 0;
	if ((size - 1 < lendest) || (size == 0))
		return (lenstr + size);
	while ((src[i]) && (lendest + i < size - 1))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + ft_strlen(src));
}
