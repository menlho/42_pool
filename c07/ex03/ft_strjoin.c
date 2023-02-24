/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momascle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:13:20 by momascle          #+#    #+#             */
/*   Updated: 2023/02/23 16:22:50 by momascle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*char	*ft_strdup(char *str)
{
	char	*buffer;
	int	size;
	int	i;

	size = ft_strlen(str);
	buffer = (char *)malloc((size + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	i = 0;
	while (str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[0] = '\0';
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		str = ft_strcat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*int	main(int argc, char *argv[])
{
	char *tabtest[] = {
		"Hello",
		" my name is Morgan",
		" I study at 42 school.",
	};
	argv++;
	char *sep = ":RABBIT:";
	char *buffer = ft_strjoin(argc-1, argv, sep);
	printf("string joined with %s ---> : %s\n", sep, buffer);
	free(buffer);
	buffer = ft_strjoin(3, tabtest, sep);
	printf("string joined with %s ---> : %s\n", sep, buffer);
	free(buffer);

	return (0);
}*/
